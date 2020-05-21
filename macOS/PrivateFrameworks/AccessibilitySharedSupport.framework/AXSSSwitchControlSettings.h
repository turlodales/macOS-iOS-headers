//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AXSSSwitchControlSettings : NSObject
{
    BOOL _soundEffectsEnabled;
    BOOL _speechEnabled;
    NSArray *_scanningStyles;
    NSArray *_tapBehaviors;
    NSArray *_cursorSizes;
    NSArray *_postActivationScanLocations;
    double _autoScanningInterval;
    double _autoHideTimeout;
    double _pauseOnFirstItemInterval;
    unsigned long long _numberOfScanLoops;
    double _dwellDuration;
    double _repeatActionInterval;
    double _holdDuration;
    double _ignoreRepeatDuration;
    double _longPressDuration;
    double _autoTapTimeout;
}

- (void).cxx_destruct;
@property(nonatomic) double autoTapTimeout; // @synthesize autoTapTimeout=_autoTapTimeout;
@property(nonatomic) double longPressDuration; // @synthesize longPressDuration=_longPressDuration;
@property(nonatomic) BOOL speechEnabled; // @synthesize speechEnabled=_speechEnabled;
@property(nonatomic) BOOL soundEffectsEnabled; // @synthesize soundEffectsEnabled=_soundEffectsEnabled;
@property(nonatomic) double ignoreRepeatDuration; // @synthesize ignoreRepeatDuration=_ignoreRepeatDuration;
@property(nonatomic) double holdDuration; // @synthesize holdDuration=_holdDuration;
@property(nonatomic) double repeatActionInterval; // @synthesize repeatActionInterval=_repeatActionInterval;
@property(nonatomic) double dwellDuration; // @synthesize dwellDuration=_dwellDuration;
@property(nonatomic) unsigned long long numberOfScanLoops; // @synthesize numberOfScanLoops=_numberOfScanLoops;
@property(nonatomic) double pauseOnFirstItemInterval; // @synthesize pauseOnFirstItemInterval=_pauseOnFirstItemInterval;
@property(nonatomic) double autoHideTimeout; // @synthesize autoHideTimeout=_autoHideTimeout;
@property(nonatomic) double autoScanningInterval; // @synthesize autoScanningInterval=_autoScanningInterval;
@property(copy, nonatomic) NSArray *postActivationScanLocations; // @synthesize postActivationScanLocations=_postActivationScanLocations;
@property(copy, nonatomic) NSArray *cursorSizes; // @synthesize cursorSizes=_cursorSizes;
@property(copy, nonatomic) NSArray *tapBehaviors; // @synthesize tapBehaviors=_tapBehaviors;
@property(copy, nonatomic) NSArray *scanningStyles; // @synthesize scanningStyles=_scanningStyles;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;

@end

