/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.swift.enumstrict;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftStruct("MyStruct")
public final class MyStruct {
    @ThriftConstructor
    public MyStruct(
        @ThriftField(value=1, name="myEnum", requiredness=Requiredness.NONE) final test.fixtures.swift.enumstrict.MyEnum myEnum,
        @ThriftField(value=2, name="myBigEnum", requiredness=Requiredness.NONE) final test.fixtures.swift.enumstrict.MyBigEnum myBigEnum
    ) {
        this.myEnum = myEnum;
        this.myBigEnum = myBigEnum;
    }
    
    protected MyStruct() {
      this.myEnum = null;
      this.myBigEnum = null;
    }
    
    public static class Builder {
        private test.fixtures.swift.enumstrict.MyEnum myEnum;
    
        public Builder setMyEnum(test.fixtures.swift.enumstrict.MyEnum myEnum) {
            this.myEnum = myEnum;
            return this;
        }
        private test.fixtures.swift.enumstrict.MyBigEnum myBigEnum;
    
        public Builder setMyBigEnum(test.fixtures.swift.enumstrict.MyBigEnum myBigEnum) {
            this.myBigEnum = myBigEnum;
            return this;
        }
    
        public Builder() { }
        public Builder(MyStruct other) {
            this.myEnum = other.myEnum;
            this.myBigEnum = other.myBigEnum;
        }
    
        public MyStruct build() {
            return new MyStruct (
                this.myEnum,
                this.myBigEnum
            );
        }
    }
    
    private final test.fixtures.swift.enumstrict.MyEnum myEnum;
    private final test.fixtures.swift.enumstrict.MyBigEnum myBigEnum;

    
    @ThriftField(value=1, name="myEnum", requiredness=Requiredness.NONE)
    public test.fixtures.swift.enumstrict.MyEnum getMyEnum() { return myEnum; }
        
    @ThriftField(value=2, name="myBigEnum", requiredness=Requiredness.NONE)
    public test.fixtures.swift.enumstrict.MyBigEnum getMyBigEnum() { return myBigEnum; }
    
    @Override
    public String toString() {
        return toStringHelper(this)
            .add("myEnum", myEnum)
            .add("myBigEnum", myBigEnum)
            .toString();
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        MyStruct other = (MyStruct)o;
    
        return
            Objects.equals(myEnum, other.myEnum) &&
            Objects.equals(myBigEnum, other.myBigEnum) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            myEnum,
            myBigEnum
        });
    }
    
}
