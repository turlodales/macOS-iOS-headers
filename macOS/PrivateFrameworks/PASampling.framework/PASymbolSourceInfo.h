//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PASerializable.h"

@class NSString;

@interface PASymbolSourceInfo : NSObject <PASerializable>
{
    unsigned long long _offsetIntoSymbolOwner;
    unsigned long long _length;
    NSString *_fileName;
    unsigned int _lineNumber;
    unsigned int _columnNumber;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(readonly) unsigned long long length; // @synthesize length=_length;
@property(readonly) unsigned long long offsetIntoSymbolOwner; // @synthesize offsetIntoSymbolOwner=_offsetIntoSymbolOwner;
@property(readonly) unsigned int sourceFileColumnNumber; // @synthesize sourceFileColumnNumber=_columnNumber;
@property(readonly) unsigned int sourceFileLineNumber; // @synthesize sourceFileLineNumber=_lineNumber;
@property(readonly) NSString *sourceFileName; // @synthesize sourceFileName=_fileName;
@property(readonly, copy) NSString *debugDescription;
- (BOOL)isEmptySourceInfo;
- (id)_initEmptySourceInfoWithOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (id)initWithOffsetIntoSymbolOwner:(unsigned long long)arg1 length:(unsigned long long)arg2 fileName:(id)arg3 lineNumber:(unsigned int)arg4 columnNumber:(unsigned int)arg5;
- (id)initWithCSSymbolOwner:(struct _CSTypeRef)arg1 andOffsetIntoSymbolOwner:(unsigned long long)arg2;
- (void)fixupOffsetFromVersion1WithSymbolOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)_initWithSerializedSymbolSourceInfo:(const CDStruct_8e6a935a *)arg1;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

