//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol PLHighlightItem <NSObject>
@property(readonly, nonatomic) double promotionScore;
@property(readonly, nonatomic) BOOL isRecent;
@property(readonly, nonatomic) unsigned short type;
@property(readonly, nonatomic) BOOL isPromoted;
@property(readonly, nonatomic) unsigned long long numberOfAssetsInExtended;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@end

