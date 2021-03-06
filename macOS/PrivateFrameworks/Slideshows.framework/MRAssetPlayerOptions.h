//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRImage;

@interface MRAssetPlayerOptions : NSObject
{
    MRImage *_initialImage;
    BOOL _wantsMonochromatic;
    BOOL _wantsMipmap;
    BOOL _wantsPowerOfTwo;
    BOOL _isForExport;
    BOOL _thumbnailIsOK;
    double _stillTime;
    id _playerHint;
    double _introDuration;
    double _mainDuration;
    double _outroDuration;
    struct CGSize _resolutionIfEmbeddedAsset;
}

@property(nonatomic) double outroDuration; // @synthesize outroDuration=_outroDuration;
@property(nonatomic) double mainDuration; // @synthesize mainDuration=_mainDuration;
@property(nonatomic) double introDuration; // @synthesize introDuration=_introDuration;
@property(nonatomic) id playerHint; // @synthesize playerHint=_playerHint;
@property(nonatomic) struct CGSize resolutionIfEmbeddedAsset; // @synthesize resolutionIfEmbeddedAsset=_resolutionIfEmbeddedAsset;
@property(nonatomic) double stillTime; // @synthesize stillTime=_stillTime;
@property(nonatomic) BOOL thumbnailIsOK; // @synthesize thumbnailIsOK=_thumbnailIsOK;
@property(nonatomic) BOOL isForExport; // @synthesize isForExport=_isForExport;
@property(nonatomic) BOOL wantsPowerOfTwo; // @synthesize wantsPowerOfTwo=_wantsPowerOfTwo;
@property(nonatomic) BOOL wantsMipmap; // @synthesize wantsMipmap=_wantsMipmap;
@property(nonatomic) BOOL wantsMonochromatic; // @synthesize wantsMonochromatic=_wantsMonochromatic;
@property(retain) MRImage *initialImage;
@property(readonly) BOOL isStill;
@property(readonly) BOOL isEmbeddedAsset;
- (void)dealloc;
- (id)init;

@end

