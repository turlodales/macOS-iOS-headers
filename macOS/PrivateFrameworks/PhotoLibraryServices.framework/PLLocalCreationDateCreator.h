//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PFTimeZoneLookup;

@interface PLLocalCreationDateCreator : NSObject
{
    PFTimeZoneLookup *_timeZoneLookup;
}

+ (void)initialize;
+ (id)_gmtTranslationDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) PFTimeZoneLookup *timeZoneLookup; // @synthesize timeZoneLookup=_timeZoneLookup;
- (id)generateInferredTimeZoneOffsetForAsset:(id)arg1;
- (id)init;

@end

