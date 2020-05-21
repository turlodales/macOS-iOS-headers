//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLUniformTypeIdentifierIdentity.h"

@class NSString;

@interface PHImageRequestUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>
{
    BOOL _conformsToRawImage;
    BOOL _conformsToImage;
    BOOL _conformsToMovie;
    BOOL _isPlayableVideo;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isPlayableVideo; // @synthesize isPlayableVideo=_isPlayableVideo;
@property(nonatomic) BOOL conformsToMovie; // @synthesize conformsToMovie=_conformsToMovie;
@property(nonatomic) BOOL conformsToImage; // @synthesize conformsToImage=_conformsToImage;
@property(nonatomic) BOOL conformsToRawImage; // @synthesize conformsToRawImage=_conformsToRawImage;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=isPrimaryImageFormat) BOOL primaryImageFormat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

