//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObjectReference.h>

@interface PHAssetReference : PHObjectReference
{
    BOOL _trashed;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _sourceType;
}

+ (id)representedType;
+ (id)referenceForAsset:(id)arg1;
@property(readonly, nonatomic, getter=isTrashed) BOOL trashed; // @synthesize trashed=_trashed;
@property(readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 mediaType:(long long)arg3 subtypes:(unsigned long long)arg4 sourceType:(unsigned long long)arg5 isTrashed:(BOOL)arg6;

@end

