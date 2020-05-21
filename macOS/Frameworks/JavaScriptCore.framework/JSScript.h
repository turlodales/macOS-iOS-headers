//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JSScript : NSObject
{
    struct WeakObjCPtr<JSVirtualMachine> m_virtualMachine;
    long long m_type;
    struct MappedFileData m_mappedSource;
    struct String m_source;
    struct RetainPtr<NSURL> m_sourceURL;
    struct RetainPtr<NSURL> m_cachePath;
    RefPtr_cd332c91 m_cachedBytecode;
}

+ (id)scriptOfType:(long long)arg1 memoryMappedFromASCIIFile:(id)arg2 withSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id *)arg6;
+ (id)scriptOfType:(long long)arg1 withSource:(id)arg2 andSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id *)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)type;
- (id)sourceURL;
- (BOOL)isUsingBytecodeCache;
- (BOOL)cacheBytecodeWithError:(id *)arg1;
- (void)readCache;
- (BOOL)writeCache:(struct String *)arg1;
- (struct JSSourceCode *)jsSourceCode;
- (struct SourceCode)sourceCode;
- (RefPtr_cd332c91)cachedBytecode;
- (const struct String *)source;
- (unsigned int)hash;
- (id)init;

@end

