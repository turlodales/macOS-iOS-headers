//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PASerializable.h"

@class NSMutableArray, NSString;

@interface PASymbol : NSObject <PASerializable>
{
    NSString *_name;
    unsigned long long _length;
    unsigned long long _offsetInOwner;
    NSMutableArray *_sourceInfos;
}

+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(readonly) unsigned long long offsetIntoOwner; // @synthesize offsetIntoOwner=_offsetInOwner;
@property unsigned long long length; // @synthesize length=_length;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)debugDescriptionForOffsetIntoOwner:(unsigned long long)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)copySourceInfoFromSymbol:(id)arg1;
- (long long)compareInfoRichnessToSymbol:(id)arg1;
- (long long)compareToSymbol:(id)arg1;
- (BOOL)containsOffsetIntoSymbolOwner:(unsigned long long)arg1;
@property(readonly) BOOL isEmptySymbol;
- (id)initEmptySymbolWithOffsetIntoOwner:(unsigned long long)arg1;
- (void)addSourceInfo:(id)arg1;
- (BOOL)hasAnySourceInfo;
- (id)sourceInfoWithOffsetIntoSymbol:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 length:(unsigned long long)arg2 offsetInOwner:(unsigned long long)arg3;
- (id)initWithCSSymbolRef:(struct _CSTypeRef)arg1;
- (void)setOffsetIntoOwner:(unsigned long long)arg1;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (id)_initWithSerializedSymbol:(const CDStruct_1ca4b1b0 *)arg1;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

