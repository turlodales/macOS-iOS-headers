//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CNVCardWritingOptions : NSObject
{
    BOOL _includeNotes;
    BOOL _includePhotos;
    BOOL _includePrivateFields;
    BOOL _includePrivateBundleIdentifiers;
    BOOL _includeUserSettings;
    BOOL _compressPhotos;
    BOOL _prefersUncroppedPhotos;
    BOOL _usePhotoReferencesIfAvailable;
    unsigned long long _maximumEncodingLength;
    unsigned long long _maximumImageEncodingLength;
    struct CGSize _maximumImageSize;
    NSArray *_treatAsUnknownProperties;
    unsigned long long _outputVersion;
    NSArray *_availableEncodings;
}

+ (id)optionsFromPreferences;
- (void).cxx_destruct;
@property(copy) NSArray *availableEncodings; // @synthesize availableEncodings=_availableEncodings;
@property unsigned long long outputVersion; // @synthesize outputVersion=_outputVersion;
@property(copy) NSArray *treatAsUnknownProperties; // @synthesize treatAsUnknownProperties=_treatAsUnknownProperties;
@property struct CGSize maximumImageSize; // @synthesize maximumImageSize=_maximumImageSize;
@property unsigned long long maximumImageEncodingLength; // @synthesize maximumImageEncodingLength=_maximumImageEncodingLength;
@property unsigned long long maximumEncodingLength; // @synthesize maximumEncodingLength=_maximumEncodingLength;
@property BOOL usePhotoReferencesIfAvailable; // @synthesize usePhotoReferencesIfAvailable=_usePhotoReferencesIfAvailable;
@property BOOL prefersUncroppedPhotos; // @synthesize prefersUncroppedPhotos=_prefersUncroppedPhotos;
@property BOOL compressPhotos; // @synthesize compressPhotos=_compressPhotos;
@property BOOL includePhotos; // @synthesize includePhotos=_includePhotos;
@property BOOL includeNotes; // @synthesize includeNotes=_includeNotes;
@property BOOL includeUserSettings; // @synthesize includeUserSettings=_includeUserSettings;
@property BOOL includePrivateBundleIdentifiers; // @synthesize includePrivateBundleIdentifiers=_includePrivateBundleIdentifiers;
@property BOOL includePrivateFields; // @synthesize includePrivateFields=_includePrivateFields;
- (id)description;
- (id)init;

@end

