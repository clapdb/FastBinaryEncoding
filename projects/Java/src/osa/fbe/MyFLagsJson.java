//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package osa.fbe;;

public final class MyFLagsJson implements com.google.gson.JsonSerializer<osa.MyFLags>, com.google.gson.JsonDeserializer<osa.MyFLags>
{
    @Override
    public com.google.gson.JsonElement serialize(osa.MyFLags src, java.lang.reflect.Type typeOfSrc, com.google.gson.JsonSerializationContext context)
    {
        return new com.google.gson.JsonPrimitive(src.getRaw());
    }

    @Override
    public osa.MyFLags deserialize(com.google.gson.JsonElement json, java.lang.reflect.Type type, com.google.gson.JsonDeserializationContext context) throws com.google.gson.JsonParseException
    {
        return new osa.MyFLags(json.getAsJsonPrimitive().getAsInt());
    }
}
