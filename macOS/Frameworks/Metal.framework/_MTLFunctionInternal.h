//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/_MTLFunction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MTLFunctionInternal : _MTLFunction
{
    struct MTLFunctionData _functionData;
    unsigned char _publicMetadataInitialized;
    unsigned char _privateMetadataInitialized;
    struct MTLProgramObject *_programObject;
    NSString *_filePath;
    long long _lineNumber;
}

- (unsigned long long)renderTargetArrayIndexType;
- (long long)lineNumber;
- (void)setLineNumber:(long long)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)initializePrivateMetadata;
- (id)newSpecializedFunctionWithConstants:(id)arg1 error:(id *)arg2;
- (void)newSpecializedFunctionWithConstants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)functionConstantIndexByName:(id)arg1 type:(unsigned long long *)arg2;
- (void)setFunctionConstants:(id)arg1;
- (id)functionConstants;
- (BOOL)needsFunctionConstantValues;
- (void)setVertexAttributes:(id)arg1;
- (id)vertexAttributes;
- (void)initializePublicMetadata;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (unsigned char)bitcodeType;
- (unsigned long long)bitCodeOffset;
- (const struct MTLFunctionData *)functionData;
- (struct MTLProgramObject *)programObject;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData *)arg3 functionData:(struct MTLFunctionData *)arg4 device:(id)arg5;

@end

