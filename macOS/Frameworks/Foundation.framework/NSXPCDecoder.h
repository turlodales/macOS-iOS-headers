//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSXPCCoder.h>

@class NSObject<OS_xpc_object>, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSXPCDecoder : NSXPCCoder
{
    unsigned long long _genericIndex;
    struct {
        char *data;
        unsigned long long dataLen;
        struct __CFString *tempString;
    } _decoder;
    NSXPCConnection *_connection;
    CDStruct_183601bc *_collections[128];
    CDStruct_1b1be194 _rootObject;
    unsigned int _collectionPointer;
    id _allowedClassesList[128];
    long long _allowedClassesIndex;
    NSObject<OS_xpc_object> *_oolObjects;
}

@property NSXPCConnection *_connection; // @synthesize _connection;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s *)arg1 forKey:(id)arg2;
- (id)_xpcObjectForIndex:(long long)arg1;
- (id)decodeXPCObjectForKey:(id)arg1;
- (const char *)_decodeCStringForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (long long)decodeIntegerForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)allowedClasses;
- (int)__decodeXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id *)arg3 outArguments:(id *)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id *)arg6 outSelector:(SEL *)arg7 isReply:(BOOL)arg8 replySelector:(SEL)arg9 interface:(id)arg10;
- (id)_decodeReplyFromXPCObject:(id)arg1 forSelector:(SEL)arg2 interface:(id)arg3;
- (int)_decodeMessageFromXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id *)arg3 outArguments:(id *)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id *)arg6 outSelector:(SEL *)arg7 interface:(id)arg8;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_decodeObjectOfClasses:(id)arg1 atObject:(CDStruct_1b1be194 *)arg2;
- (id)decodeObjectForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (id)decodeObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)_validateAllowedXPCType:(struct _xpc_type_s *)arg1 forKey:(id)arg2;
- (void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3;
- (BOOL)allowsKeyedCoding;
- (id)debugDescription;
- (void)dealloc;
- (void)_startReadingFromXPCObject:(id)arg1;
- (id)init;
- (id)connection;

@end

