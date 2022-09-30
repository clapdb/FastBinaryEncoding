//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package variants;

public class Simple implements Comparable<Object>
{
    public String name = "";

    public static final long fbeTypeConst = 1;
    public long fbeType() { return fbeTypeConst; }

    public Simple() {}

    public Simple(String name)
    {
        this.name = name;
    }

    public Simple(Simple other)
    {
        this.name = other.name;
    }

    public Simple clone()
    {
        // Serialize the struct to the FBE stream
        var writer = new variants.fbe.SimpleModel();
        writer.serialize(this);

        // Deserialize the struct from the FBE stream
        var reader = new variants.fbe.SimpleModel();
        reader.attach(writer.getBuffer());
        return reader.deserialize();
    }

    @Override
    public int compareTo(Object other)
    {
        if (other == null)
            return -1;

        if (!Simple.class.isAssignableFrom(other.getClass()))
            return -1;

        final Simple obj = (Simple)other;

        int result = 0;
        return result;
    }

    @Override
    public boolean equals(Object other)
    {
        if (other == null)
            return false;

        if (!Simple.class.isAssignableFrom(other.getClass()))
            return false;

        final Simple obj = (Simple)other;

        return true;
    }

    @Override
    public int hashCode()
    {
        int hash = 17;
        return hash;
    }

    @Override
    public String toString()
    {
        var sb = new StringBuilder();
        sb.append("Simple(");
        sb.append("name="); if (name != null) sb.append("\"").append(name).append("\""); else sb.append("null");
        sb.append(")");
        return sb.toString();
    }

    public String toJson() { return variants.fbe.Json.getEngine().toJson(this); }
    public static Simple fromJson(String json) { return variants.fbe.Json.getEngine().fromJson(json, Simple.class); }
}
