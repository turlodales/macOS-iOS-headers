//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKFontManager-Protocol.h>

@class NSFont, NSString;

@interface MKFontManager : NSObject <MKFontManager>
{
    BOOL _useSmallFont;
}

+ (void)setUseSmallFont:(BOOL)arg1;
+ (id)sharedManager;
@property(nonatomic) BOOL useSmallFont; // @synthesize useSmallFont=_useSmallFont;
- (id)iconFontToMatch:(id)arg1;
@property(readonly, nonatomic) NSFont *rowGlyphButtonFont;
@property(readonly, nonatomic) NSFont *rowButtonFont;
@property(readonly, nonatomic) NSFont *smallAttributionFont;
@property(readonly, nonatomic) NSFont *attributionFont;
@property(readonly, nonatomic) NSFont *sectionHeaderButtonFont;
@property(readonly, nonatomic) NSFont *sectionHeaderFont;
@property(readonly, nonatomic) NSFont *mediumBodyFont;
@property(readonly, nonatomic) NSFont *mediumTitleFont;
@property(readonly, nonatomic) NSFont *boldBodyFont;
@property(readonly, nonatomic) NSFont *bodyFont;
@property(readonly, nonatomic) NSFont *subtitleFont;
@property(readonly, nonatomic) NSFont *brandTitleFont;
@property(readonly, nonatomic) NSFont *largeTitleFont;
@property(readonly, nonatomic) NSFont *largeTitleFontStatic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

