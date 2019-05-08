/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.complex_union;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("ValUnion")
public final class ValUnion {
    private Object value;
    private short id;
    private String name;
    
    @ThriftConstructor
    public ValUnion() {
    }
    
    public static ValUnion fromV1(final test.fixtures.complex_union.Val v1) {
        ValUnion res = new ValUnion();
        res.value = v1;
        res.id = 1;
        res.name = "v1";
        return res;
    }
    
    public static ValUnion fromV2(final test.fixtures.complex_union.Val v2) {
        ValUnion res = new ValUnion();
        res.value = v2;
        res.id = 2;
        res.name = "v2";
        return res;
    }
    
    @ThriftField
    @Deprecated
    public void setV1(final test.fixtures.complex_union.Val v1) {
        this.value = v1;
        this.id = 1;
        this.name = "v1";
    }
    @ThriftField
    @Deprecated
    public void setV2(final test.fixtures.complex_union.Val v2) {
        this.value = v2;
        this.id = 2;
        this.name = "v2";
    }

    @ThriftField(value=1, name="v1", requiredness=Requiredness.NONE)
    public test.fixtures.complex_union.Val getV1() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a v1 element!");
        }
        return (test.fixtures.complex_union.Val) value;
    }

    public boolean isSetV1() {
        return this.id == 1;
    }

    @ThriftField(value=2, name="v2", requiredness=Requiredness.NONE)
    public test.fixtures.complex_union.Val getV2() {
        if (this.id != 2) {
            throw new IllegalStateException("Not a v2 element!");
        }
        return (test.fixtures.complex_union.Val) value;
    }

    public boolean isSetV2() {
        return this.id == 2;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public String getThriftName() {
        return this.name;
    }

    @Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", name)
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
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

        ValUnion other = (ValUnion)o;

        return Objects.equals(this.id, other.id)
                && Objects.equals(this.value, other.value)
                && Objects.equals(this.name, other.name);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            id,
            value,
            name
        });
    }
}
