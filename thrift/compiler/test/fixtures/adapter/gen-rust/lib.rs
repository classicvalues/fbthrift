// @generated by Thrift for src/module.thrift
// This file is probably not the place you want to edit!

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies)]

pub use self::errors::*;
pub use self::types::*;

pub mod types {
    #![allow(clippy::redundant_closure)]


    pub type SetWithAdapter = ::std::collections::BTreeSet<::std::string::String>;

    pub type ListWithElemAdapter = ::std::vec::Vec<::std::string::String>;

    #[derive(Clone, Debug, PartialEq)]
    pub struct Foo {
        pub intField: ::std::primitive::i32,
        pub optionalIntField: ::std::option::Option<::std::primitive::i32>,
        pub intFieldWithDefault: ::std::primitive::i32,
        pub setField: crate::types::SetWithAdapter,
        pub optionalSetField: ::std::option::Option<crate::types::SetWithAdapter>,
        pub mapField: ::std::collections::BTreeMap<::std::string::String, crate::types::ListWithElemAdapter>,
        pub optionalMapField: ::std::option::Option<::std::collections::BTreeMap<::std::string::String, crate::types::ListWithElemAdapter>>,
    }

    #[derive(Clone, Debug, PartialEq)]
    pub struct Bar {
        pub structField: crate::types::Foo,
        pub optionalStructField: ::std::option::Option<crate::types::Foo>,
        pub structListField: ::std::vec::Vec<crate::types::Foo>,
        pub optionalStructListField: ::std::option::Option<::std::vec::Vec<crate::types::Foo>>,
    }



    impl ::std::default::Default for self::Foo {
        fn default() -> Self {
            Self {
                intField: ::std::default::Default::default(),
                optionalIntField: ::std::option::Option::None,
                intFieldWithDefault: 13,
                setField: ::std::default::Default::default(),
                optionalSetField: ::std::option::Option::None,
                mapField: ::std::default::Default::default(),
                optionalMapField: ::std::option::Option::None,
            }
        }
    }

    unsafe impl ::std::marker::Send for self::Foo {}
    unsafe impl ::std::marker::Sync for self::Foo {}

    impl ::fbthrift::GetTType for self::Foo {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for self::Foo
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("Foo");
            p.write_field_begin("intField", ::fbthrift::TType::I32, 1);
            ::fbthrift::Serialize::write(&self.intField, p);
            p.write_field_end();
            if let ::std::option::Option::Some(some) = &self.optionalIntField {
                p.write_field_begin("optionalIntField", ::fbthrift::TType::I32, 2);
                ::fbthrift::Serialize::write(some, p);
                p.write_field_end();
            }
            p.write_field_begin("intFieldWithDefault", ::fbthrift::TType::I32, 3);
            ::fbthrift::Serialize::write(&self.intFieldWithDefault, p);
            p.write_field_end();
            p.write_field_begin("setField", ::fbthrift::TType::Set, 4);
            ::fbthrift::Serialize::write(&self.setField, p);
            p.write_field_end();
            if let ::std::option::Option::Some(some) = &self.optionalSetField {
                p.write_field_begin("optionalSetField", ::fbthrift::TType::Set, 5);
                ::fbthrift::Serialize::write(some, p);
                p.write_field_end();
            }
            p.write_field_begin("mapField", ::fbthrift::TType::Map, 6);
            ::fbthrift::Serialize::write(&self.mapField, p);
            p.write_field_end();
            if let ::std::option::Option::Some(some) = &self.optionalMapField {
                p.write_field_begin("optionalMapField", ::fbthrift::TType::Map, 7);
                ::fbthrift::Serialize::write(some, p);
                p.write_field_end();
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for self::Foo
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("intField", ::fbthrift::TType::I32, 1),
                ::fbthrift::Field::new("intFieldWithDefault", ::fbthrift::TType::I32, 3),
                ::fbthrift::Field::new("mapField", ::fbthrift::TType::Map, 6),
                ::fbthrift::Field::new("optionalIntField", ::fbthrift::TType::I32, 2),
                ::fbthrift::Field::new("optionalMapField", ::fbthrift::TType::Map, 7),
                ::fbthrift::Field::new("optionalSetField", ::fbthrift::TType::Set, 5),
                ::fbthrift::Field::new("setField", ::fbthrift::TType::Set, 4),
            ];
            let mut field_intField = ::std::option::Option::None;
            let mut field_optionalIntField = ::std::option::Option::None;
            let mut field_intFieldWithDefault = ::std::option::Option::None;
            let mut field_setField = ::std::option::Option::None;
            let mut field_optionalSetField = ::std::option::Option::None;
            let mut field_mapField = ::std::option::Option::None;
            let mut field_optionalMapField = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::I32, 1) => field_intField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::I32, 2) => field_optionalIntField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::I32, 3) => field_intFieldWithDefault = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Set, 4) => field_setField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Set, 5) => field_optionalSetField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Map, 6) => field_mapField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Map, 7) => field_optionalMapField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                intField: field_intField.unwrap_or_default(),
                optionalIntField: field_optionalIntField,
                intFieldWithDefault: field_intFieldWithDefault.unwrap_or_else(|| 13),
                setField: field_setField.unwrap_or_default(),
                optionalSetField: field_optionalSetField,
                mapField: field_mapField.unwrap_or_default(),
                optionalMapField: field_optionalMapField,
            })
        }
    }


    impl ::std::default::Default for self::Bar {
        fn default() -> Self {
            Self {
                structField: ::std::default::Default::default(),
                optionalStructField: ::std::option::Option::None,
                structListField: ::std::default::Default::default(),
                optionalStructListField: ::std::option::Option::None,
            }
        }
    }

    unsafe impl ::std::marker::Send for self::Bar {}
    unsafe impl ::std::marker::Sync for self::Bar {}

    impl ::fbthrift::GetTType for self::Bar {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for self::Bar
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("Bar");
            p.write_field_begin("structField", ::fbthrift::TType::Struct, 1);
            ::fbthrift::Serialize::write(&self.structField, p);
            p.write_field_end();
            if let ::std::option::Option::Some(some) = &self.optionalStructField {
                p.write_field_begin("optionalStructField", ::fbthrift::TType::Struct, 2);
                ::fbthrift::Serialize::write(some, p);
                p.write_field_end();
            }
            p.write_field_begin("structListField", ::fbthrift::TType::List, 3);
            ::fbthrift::Serialize::write(&self.structListField, p);
            p.write_field_end();
            if let ::std::option::Option::Some(some) = &self.optionalStructListField {
                p.write_field_begin("optionalStructListField", ::fbthrift::TType::List, 4);
                ::fbthrift::Serialize::write(some, p);
                p.write_field_end();
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for self::Bar
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("optionalStructField", ::fbthrift::TType::Struct, 2),
                ::fbthrift::Field::new("optionalStructListField", ::fbthrift::TType::List, 4),
                ::fbthrift::Field::new("structField", ::fbthrift::TType::Struct, 1),
                ::fbthrift::Field::new("structListField", ::fbthrift::TType::List, 3),
            ];
            let mut field_structField = ::std::option::Option::None;
            let mut field_optionalStructField = ::std::option::Option::None;
            let mut field_structListField = ::std::option::Option::None;
            let mut field_optionalStructListField = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::Struct, 1) => field_structField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 2) => field_optionalStructField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::List, 3) => field_structListField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::List, 4) => field_optionalStructListField = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                structField: field_structField.unwrap_or_default(),
                optionalStructField: field_optionalStructField,
                structListField: field_structListField.unwrap_or_default(),
                optionalStructListField: field_optionalStructListField,
            })
        }
    }

}

pub mod dependencies {
}

pub mod services {
    pub mod service {

        #[derive(Clone, Debug)]
        pub enum FuncExn {
            Success(::std::primitive::i32),
            ApplicationException(::fbthrift::ApplicationException),
        }

        impl ::std::convert::From<::fbthrift::ApplicationException> for FuncExn {
            fn from(exn: ::fbthrift::ApplicationException) -> Self {
                FuncExn::ApplicationException(exn)
            }
        }

        impl ::fbthrift::GetTType for FuncExn {
            const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
        }

        impl<P> ::fbthrift::Serialize<P> for FuncExn
        where
            P: ::fbthrift::ProtocolWriter,
        {
            fn write(&self, p: &mut P) {
                p.write_struct_begin("Func");
                match self {
                    FuncExn::Success(inner) => {
                        p.write_field_begin(
                            "Success",
                            ::fbthrift::TType::I32,
                            0i16,
                        );
                        inner.write(p);
                        p.write_field_end();
                    }
                    FuncExn::ApplicationException(_) => panic!(
                        "Bad union Alt field {} id {}",
                        "ApplicationException",
                        -2147483648i32,
                    ),
                }
                p.write_field_stop();
                p.write_struct_end();
            }
        }

        impl<P> ::fbthrift::Deserialize<P> for FuncExn
        where
            P: ::fbthrift::ProtocolReader,
        {
            fn read(p: &mut P) -> ::anyhow::Result<Self> {
                static RETURNS: &[::fbthrift::Field] = &[
                    ::fbthrift::Field::new("Success", ::fbthrift::TType::I32, 0),
                ];
                let _ = p.read_struct_begin(|_| ())?;
                let mut once = false;
                let mut alt = ::std::option::Option::None;
                loop {
                    let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                    match ((fty, fid as ::std::primitive::i32), once) {
                        ((::fbthrift::TType::Stop, _), _) => {
                            p.read_field_end()?;
                            break;
                        }
                        ((::fbthrift::TType::I32, 0i32), false) => {
                            once = true;
                            alt = ::std::option::Option::Some(FuncExn::Success(::fbthrift::Deserialize::read(p)?));
                        }
                        ((ty, _id), false) => p.skip(ty)?,
                        ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                            ::fbthrift::ApplicationException::new(
                                ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                                format!(
                                    "unwanted extra union {} field ty {:?} id {}",
                                    "FuncExn",
                                    badty,
                                    badid,
                                ),
                            )
                        )),
                    }
                    p.read_field_end()?;
                }
                p.read_struct_end()?;
                alt.ok_or_else(||
                    ::fbthrift::ApplicationException::new(
                        ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                        format!("Empty union {}", "FuncExn"),
                    )
                    .into(),
                )
            }
        }
    }
}

pub mod client {

    pub struct ServiceImpl<P, T> {
        transport: T,
        _phantom: ::std::marker::PhantomData<fn() -> P>,
    }

    impl<P, T> ServiceImpl<P, T> {
        pub fn new(
            transport: T,
        ) -> Self {
            Self {
                transport,
                _phantom: ::std::marker::PhantomData,
            }
        }

        pub fn transport(&self) -> &T {
            &self.transport
        }
    }

    pub trait Service: ::std::marker::Send {
        fn func(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &crate::types::Foo,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<::std::primitive::i32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>>;
    }

    impl<P, T> Service for ServiceImpl<P, T>
    where
        P: ::fbthrift::Protocol,
        T: ::fbthrift::Transport,
        P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
        ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    {        fn func(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &crate::types::Foo,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<::std::primitive::i32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>> {
            use ::const_cstr::const_cstr;
            use ::fbthrift::{ProtocolWriter as _};
            use ::futures::future::{FutureExt as _, TryFutureExt as _};
            const_cstr! {
                SERVICE_NAME = "Service";
                METHOD_NAME = "Service.func";
            }
            let request = ::fbthrift::serialize!(P, |p| ::fbthrift::protocol::write_message(
                p,
                "func",
                ::fbthrift::MessageType::Call,
                // Note: we send a 0 message sequence ID from clients because
                // this field should not be used by the server (except for some
                // language implementations).
                0,
                |p| {
                    p.write_struct_begin("args");
                    p.write_field_begin("arg_arg1", ::fbthrift::TType::String, 1i16);
                    ::fbthrift::Serialize::write(&arg_arg1, p);
                    p.write_field_end();
                    p.write_field_begin("arg_arg2", ::fbthrift::TType::Struct, 2i16);
                    ::fbthrift::Serialize::write(&arg_arg2, p);
                    p.write_field_end();
                    p.write_field_stop();
                    p.write_struct_end();
                },
            ));
            self.transport()
                .call(SERVICE_NAME, METHOD_NAME, request)
                .map_err(::std::convert::From::from)
                .and_then(|reply| ::futures::future::ready({
                    let de = P::deserializer(reply);
                    move |mut p: P::Deserializer| -> ::std::result::Result<::std::primitive::i32, crate::errors::service::FuncError> {
                        use ::fbthrift::{ProtocolReader as _};
                        let p = &mut p;
                        let (_, message_type, _) = p.read_message_begin(|_| ())?;
                        let result = match message_type {
                            ::fbthrift::MessageType::Reply => {
                                let exn: crate::services::service::FuncExn = ::fbthrift::Deserialize::read(p)?;
                                match exn {
                                    crate::services::service::FuncExn::Success(x) => ::std::result::Result::Ok(x),
                                    crate::services::service::FuncExn::ApplicationException(ae) => {
                                        ::std::result::Result::Err(crate::errors::service::FuncError::ApplicationException(ae))
                                    }
                                }
                            }
                            ::fbthrift::MessageType::Exception => {
                                let ae: ::fbthrift::ApplicationException = ::fbthrift::Deserialize::read(p)?;
                                ::std::result::Result::Err(crate::errors::service::FuncError::ApplicationException(ae))
                            }
                            ::fbthrift::MessageType::Call | ::fbthrift::MessageType::Oneway | ::fbthrift::MessageType::InvalidMessageType => {
                                let err = ::anyhow::anyhow!("Unexpected message type {:?}", message_type);
                                ::std::result::Result::Err(crate::errors::service::FuncError::ThriftError(err))
                            }
                        };
                        p.read_message_end()?;
                        result
                    }(de)
                }))
                .boxed()
        }
    }

    impl<'a, T> Service for T
    where
        T: ::std::convert::AsRef<dyn Service + 'a>,
        T: ::std::marker::Send,
    {
        fn func(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &crate::types::Foo,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<::std::primitive::i32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>> {
            self.as_ref().func(
                arg_arg1,
                arg_arg2,
            )
        }
    }

    pub struct make_Service;

    /// To be called by user directly setting up a client. Avoids
    /// needing ClientFactory trait in scope, avoids unidiomatic
    /// make_Trait name.
    ///
    /// ```
    /// # const _: &str = stringify! {
    /// use bgs::client::BuckGraphService;
    ///
    /// let protocol = BinaryProtocol::new();
    /// let transport = HttpClient::new();
    /// let client = BuckGraphService::new(protocol, transport);
    /// # };
    /// ```
    impl dyn Service {
        pub fn new<P, T>(
            protocol: P,
            transport: T,
        ) -> ::std::sync::Arc<impl Service + ::std::marker::Send + 'static>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            T: ::fbthrift::Transport,
        {
            let _ = protocol;
            ::std::sync::Arc::new(ServiceImpl::<P, T>::new(transport))
        }
    }

    /// The same thing, but to be called from generic contexts where we are
    /// working with a type parameter `C: ClientFactory` to produce clients.
    impl ::fbthrift::ClientFactory for make_Service {
        type Api = dyn Service + ::std::marker::Send + ::std::marker::Sync + 'static;

        fn new<P, T>(protocol: P, transport: T) -> ::std::sync::Arc<Self::Api>
        where
            P: ::fbthrift::Protocol<Frame = T>,
            T: ::fbthrift::Transport + ::std::marker::Sync,
        {
            Service::new(protocol, transport)
        }
    }
}

pub mod server {
    #[::async_trait::async_trait]
    pub trait Service: ::std::marker::Send + ::std::marker::Sync + 'static {
        async fn func(
            &self,
            _arg1: ::std::string::String,
            _arg2: crate::types::Foo,
        ) -> ::std::result::Result<::std::primitive::i32, crate::services::service::FuncExn> {
            ::std::result::Result::Err(crate::services::service::FuncExn::ApplicationException(
                ::fbthrift::ApplicationException::unimplemented_method(
                    "Service",
                    "func",
                ),
            ))
        }
    }

    #[derive(Clone, Debug)]
    pub struct ServiceProcessor<P, H, R> {
        service: H,
        supa: ::fbthrift::NullServiceProcessor<P, R>,
        _phantom: ::std::marker::PhantomData<(P, H, R)>,
    }

    impl<P, H, R> ServiceProcessor<P, H, R>
    where
        P: ::fbthrift::Protocol + ::std::marker::Send + ::std::marker::Sync + 'static,
        P::Deserializer: ::std::marker::Send,
        H: Service,
        R: ::fbthrift::RequestContext<Name = ::const_cstr::ConstCStr> + ::std::marker::Sync,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack + ::std::marker::Send + ::std::marker::Sync,
    {
        pub fn new(service: H) -> Self {
            Self {
                service,
                supa: ::fbthrift::NullServiceProcessor::new(),
                _phantom: ::std::marker::PhantomData,
            }
        }

        pub fn into_inner(self) -> H {
            self.service
        }

        async fn handle_func<'a>(
            &'a self,
            p: &'a mut P::Deserializer,
            req_ctxt: &R,
            seqid: ::std::primitive::u32,
        ) -> ::anyhow::Result<::fbthrift::ProtocolEncodedFinal<P>> {
            use ::const_cstr::const_cstr;
            use ::fbthrift::ProtocolReader as _;

            const_cstr! {
                SERVICE_NAME = "Service";
                METHOD_NAME = "Service.func";
            }
            let mut ctx_stack = req_ctxt.get_context_stack(
                &SERVICE_NAME,
                &METHOD_NAME,
            )?;
            ::fbthrift::ContextStack::pre_read(&mut ctx_stack)?;

            static ARGS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("arg1", ::fbthrift::TType::String, 1),
                ::fbthrift::Field::new("arg2", ::fbthrift::TType::Struct, 2),
            ];
            let mut field_arg1 = ::std::option::Option::None;
            let mut field_arg2 = ::std::option::Option::None;

            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), ARGS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::String, 1) => field_arg1 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::Struct, 2) => field_arg2 = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::fbthrift::ContextStack::post_read(&mut ctx_stack, 0)?;
            let res = self.service.func(
                field_arg1.ok_or_else(|| {
                    ::fbthrift::ApplicationException::missing_arg(
                        "func",
                        "arg1",
                    )
                })?,
                field_arg2.ok_or_else(|| {
                    ::fbthrift::ApplicationException::missing_arg(
                        "func",
                        "arg2",
                    )
                })?,
            ).await;
            let res = match res {
                ::std::result::Result::Ok(res) => {
                    crate::services::service::FuncExn::Success(res)
                }
                ::std::result::Result::Err(crate::services::service::FuncExn::ApplicationException(aexn)) => {
                    return ::std::result::Result::Err(aexn.into())
                }
                ::std::result::Result::Err(crate::services::service::FuncExn::Success(_)) => {
                    panic!(
                        "{} attempted to return success via error",
                        "func",
                    )
                }
            };
            ::fbthrift::ContextStack::pre_write(&mut ctx_stack)?;
            let res = ::fbthrift::serialize!(P, |p| ::fbthrift::protocol::write_message(
                p,
                "func",
                ::fbthrift::MessageType::Reply,
                seqid,
                |p| ::fbthrift::Serialize::write(&res, p),
            ));
            ::fbthrift::ContextStack::post_write(&mut ctx_stack, 0)?;
            ::std::result::Result::Ok(res)
        }
    }

    #[::async_trait::async_trait]
    impl<P, H, R> ::fbthrift::ServiceProcessor<P> for ServiceProcessor<P, H, R>
    where
        P: ::fbthrift::Protocol + ::std::marker::Send + ::std::marker::Sync + 'static,
        P::Deserializer: ::std::marker::Send,
        H: Service,
        R: ::fbthrift::RequestContext<Name = ::const_cstr::ConstCStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack + ::std::marker::Send + ::std::marker::Sync + 'static
    {
        type RequestContext = R;

        #[inline]
        fn method_idx(&self, name: &[::std::primitive::u8]) -> ::std::result::Result<::std::primitive::usize, ::fbthrift::ApplicationException> {
            match name {
                b"func" => ::std::result::Result::Ok(0usize),
                _ => ::std::result::Result::Err(::fbthrift::ApplicationException::unknown_method()),
            }
        }

        async fn handle_method(
            &self,
            idx: ::std::primitive::usize,
            _p: &mut P::Deserializer,
            _r: &R,
            _seqid: ::std::primitive::u32,
        ) -> ::anyhow::Result<::fbthrift::ProtocolEncodedFinal<P>> {
            match idx {
                0usize => self.handle_func(_p, _r, _seqid).await,
                bad => panic!(
                    "{}: unexpected method idx {}",
                    "ServiceProcessor",
                    bad
                ),
            }
        }
    }

    #[::async_trait::async_trait]
    impl<P, H, R> ::fbthrift::ThriftService<P::Frame> for ServiceProcessor<P, H, R>
    where
        P: ::fbthrift::Protocol + ::std::marker::Send + ::std::marker::Sync + 'static,
        P::Deserializer: ::std::marker::Send,
        P::Frame: ::std::marker::Send + 'static,
        H: Service,
        R: ::fbthrift::RequestContext<Name = ::const_cstr::ConstCStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack + ::std::marker::Send + ::std::marker::Sync + 'static
    {
        type Handler = H;
        type RequestContext = R;

        async fn call(
            &self,
            req: ::fbthrift::ProtocolDecoded<P>,
            req_ctxt: &R,
        ) -> ::anyhow::Result<::fbthrift::ProtocolEncodedFinal<P>> {
            use ::fbthrift::{BufExt as _, ProtocolReader as _, ServiceProcessor as _};
            let mut p = P::deserializer(req);
            let (idx, mty, seqid) = p.read_message_begin(|name| self.method_idx(name))?;
            if mty != ::fbthrift::MessageType::Call {
                return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::InvalidMessageType,
                    format!("message type {:?} not handled", mty)
                )));
            }
            let idx = match idx {
                ::std::result::Result::Ok(idx) => idx,
                ::std::result::Result::Err(_) => {
                    let cur = P::into_buffer(p).reset();
                    return self.supa.call(cur, req_ctxt).await;
                }
            };
            let res = self.handle_method(idx, &mut p, req_ctxt, seqid).await;
            p.read_message_end()?;
            match res {
                ::std::result::Result::Ok(bytes) => ::std::result::Result::Ok(bytes),
                ::std::result::Result::Err(err) => match err.downcast_ref::<::fbthrift::ProtocolError>() {
                    ::std::option::Option::Some(::fbthrift::ProtocolError::ApplicationException(ae)) => {
                        let res = ::fbthrift::serialize!(P, |p| {
                            ::fbthrift::protocol::write_message(
                                p,
                                "ServiceProcessor",
                                ::fbthrift::MessageType::Exception,
                                seqid,
                                |p| ::fbthrift::Serialize::write(&ae, p),
                            )
                        });
                        ::std::result::Result::Ok(res)
                    }
                    _ => ::std::result::Result::Err(err),
                },
            }
        }
    }

    pub fn make_Service_server<F, H, R>(
        proto: ::fbthrift::ProtocolID,
        handler: H,
    ) -> ::std::result::Result<::std::boxed::Box<dyn ::fbthrift::ThriftService<F, Handler = H, RequestContext = R> + ::std::marker::Send + 'static>, ::fbthrift::ApplicationException>
    where
        F: ::fbthrift::Framing + ::std::marker::Send + ::std::marker::Sync + 'static,
        H: Service,
        R: ::fbthrift::RequestContext<Name = ::const_cstr::ConstCStr> + ::std::marker::Send + ::std::marker::Sync + 'static,
        <R as ::fbthrift::RequestContext>::ContextStack: ::fbthrift::ContextStack + ::std::marker::Send + ::std::marker::Sync + 'static
    {
        match proto {
            ::fbthrift::ProtocolID::BinaryProtocol => {
                ::std::result::Result::Ok(::std::boxed::Box::new(ServiceProcessor::<::fbthrift::BinaryProtocol<F>, H, R>::new(handler)))
            }
            ::fbthrift::ProtocolID::CompactProtocol => {
                ::std::result::Result::Ok(::std::boxed::Box::new(ServiceProcessor::<::fbthrift::CompactProtocol<F>, H, R>::new(handler)))
            }
            bad => ::std::result::Result::Err(::fbthrift::ApplicationException::invalid_protocol(bad)),
        }
    }
}

/// Client mocks. For every service, a struct mock::TheService that implements
/// client::TheService.
///
/// As an example of the generated API, for the following thrift service:
///
/// ```thrift
/// service MyService {
///     FunctionResponse myFunction(
///         1: FunctionRequest request,
///     ) throws {
///         1: StorageException s,
///         2: NotFoundException n,
///     ),
///
///     // other functions
/// }
/// ```
///
/// we would end up with this mock object under crate::mock::MyService:
///
/// ```
/// # const _: &str = stringify! {
/// impl crate::client::MyService for MyService<'mock> {...}
///
/// pub struct MyService<'mock> {
///     pub myFunction: myFunction<'mock>,
///     // ...
/// }
///
/// impl dyn crate::client::MyService {
///     pub fn mock<'mock>() -> MyService<'mock>;
/// }
///
/// impl myFunction<'mock> {
///     // directly return the given success response
///     pub fn ret(&self, value: FunctionResponse);
///
///     // invoke closure to compute success response
///     pub fn mock(
///         &self,
///         mock: impl FnMut(FunctionRequest) -> FunctionResponse + Send + Sync + 'mock,
///     );
///
///     // invoke closure to compute response
///     pub fn mock_result(
///         &self,
///         mock: impl FnMut(FunctionRequest) -> Result<FunctionResponse, crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock,
///     );
///
///     // return one of the function's declared exceptions
///     pub fn throw<E>(&self, exception: E)
///     where
///         E: Clone + Into<crate::services::MyService::MyFunctionExn> + Send + Sync + 'mock;
/// }
///
/// impl From<StorageException> for MyFunctionExn {...}
/// impl From<NotFoundException> for MyFunctionExn {...}
/// # };
/// ```
///
/// The intended usage from a test would be:
///
/// ```
/// # const _: &str = stringify! {
/// use std::sync::Arc;
/// use thrift_if::client::MyService;
///
/// #[test]
/// fn test_my_client() {
///     let mock = Arc::new(MyService::mock());
///
///     // directly return a success response
///     let resp = FunctionResponse {...};
///     mock.myFunction.ret(resp);
///
///     // or give a closure to compute the success response
///     mock.myFunction.mock(|request| FunctionResponse {...});
///
///     // or throw one of the function's exceptions
///     mock.myFunction.throw(StorageException::ItFailed);
///
///     // or compute a Result (useful if your exceptions aren't Clone)
///     mock.myFunction.mock_result(|request| Err(...));
///
///     let out = do_the_thing(mock).wait().unwrap();
///     assert!(out.what_i_expected());
/// }
///
/// fn do_the_thing(
///     client: Arc<dyn MyService + Send + Sync + 'static>,
/// ) -> impl Future<Item = Out> {...}
/// # };
/// ```
pub mod mock {
    pub struct Service<'mock> {
        pub func: r#impl::service::func<'mock>,
        _marker: ::std::marker::PhantomData<&'mock ()>,
    }

    impl dyn super::client::Service {
        pub fn mock<'mock>() -> Service<'mock> {
            Service {
                func: r#impl::service::func::unimplemented(),
                _marker: ::std::marker::PhantomData,
            }
        }
    }

    #[::async_trait::async_trait]
    impl<'mock> super::client::Service for Service<'mock> {
        fn func(
            &self,
            arg_arg1: &::std::primitive::str,
            arg_arg2: &crate::types::Foo,
        ) -> ::std::pin::Pin<::std::boxed::Box<dyn ::std::future::Future<Output = ::std::result::Result<::std::primitive::i32, crate::errors::service::FuncError>> + ::std::marker::Send + 'static>> {
            let mut closure = self.func.closure.lock().unwrap();
            let closure: &mut dyn ::std::ops::FnMut(::std::string::String, crate::types::Foo) -> _ = &mut **closure;
            ::std::boxed::Box::pin(::futures::future::ready(closure(arg_arg1.to_owned(), arg_arg2.clone())))
        }
    }

    mod r#impl {
        pub mod service {

            pub struct func<'mock> {
                pub(crate) closure: ::std::sync::Mutex<::std::boxed::Box<
                    dyn ::std::ops::FnMut(::std::string::String, crate::types::Foo) -> ::std::result::Result<
                        ::std::primitive::i32,
                        crate::errors::service::FuncError,
                    > + ::std::marker::Send + ::std::marker::Sync + 'mock,
                >>,
            }

            impl<'mock> func<'mock> {
                pub fn unimplemented() -> Self {
                    func {
                        closure: ::std::sync::Mutex::new(::std::boxed::Box::new(|_: ::std::string::String, _: crate::types::Foo| panic!(
                            "{}::{} is not mocked",
                            "Service",
                            "func",
                        ))),
                    }
                }

                pub fn ret(&self, value: ::std::primitive::i32) {
                    self.mock(move |_: ::std::string::String, _: crate::types::Foo| value.clone());
                }

                pub fn mock(&self, mut mock: impl ::std::ops::FnMut(::std::string::String, crate::types::Foo) -> ::std::primitive::i32 + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                    let mut closure = self.closure.lock().unwrap();
                    *closure = ::std::boxed::Box::new(move |arg1, arg2| ::std::result::Result::Ok(mock(arg1, arg2)));
                }

                pub fn mock_result(&self, mut mock: impl ::std::ops::FnMut(::std::string::String, crate::types::Foo) -> ::std::result::Result<::std::primitive::i32, crate::errors::service::FuncError> + ::std::marker::Send + ::std::marker::Sync + 'mock) {
                    let mut closure = self.closure.lock().unwrap();
                    *closure = ::std::boxed::Box::new(move |arg1, arg2| mock(arg1, arg2));
                }

                pub fn throw<E>(&self, exception: E)
                where
                    E: ::std::convert::Into<crate::errors::service::FuncError>,
                    E: ::std::clone::Clone + ::std::marker::Send + ::std::marker::Sync + 'mock,
                {
                    let mut closure = self.closure.lock().unwrap();
                    *closure = ::std::boxed::Box::new(move |_: ::std::string::String, _: crate::types::Foo| ::std::result::Result::Err(exception.clone().into()));
                }
            }
        }
    }
}

pub mod errors {
    pub mod service {

        pub type FuncError = ::fbthrift::NonthrowingFunctionError;

    }

}