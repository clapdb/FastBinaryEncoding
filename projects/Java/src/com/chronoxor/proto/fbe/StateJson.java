// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// Version: 1.8.0.0

package com.chronoxor.proto.fbe;;

public final class StateJson implements com.google.gson.JsonSerializer<com.chronoxor.proto.State>, com.google.gson.JsonDeserializer<com.chronoxor.proto.State>
{

    @Override
    public com.google.gson.JsonElement serialize(com.chronoxor.proto.State src, java.lang.reflect.Type typeOfSrc, com.google.gson.JsonSerializationContext context)
    {
        return new com.google.gson.JsonPrimitive(src.getRaw());
    }

    @Override
    public com.chronoxor.proto.State deserialize(com.google.gson.JsonElement json, java.lang.reflect.Type type, com.google.gson.JsonDeserializationContext context) throws com.google.gson.JsonParseException
    {
        return new com.chronoxor.proto.State(json.getAsJsonPrimitive().getAsByte());
    }
}
