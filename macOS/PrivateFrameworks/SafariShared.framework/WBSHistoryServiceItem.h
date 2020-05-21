//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSHistoryServiceObject.h>

@class NSData, NSString;

@interface WBSHistoryServiceItem : WBSHistoryServiceObject
{
    BOOL _shouldRecomputeDerivedVisitCountScores;
    long long _visitCount;
    long long _visitCountScore;
    NSString *_url;
    NSData *_dailyVisitCounts;
    NSData *_weeklyVisitCounts;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *weeklyVisitCounts; // @synthesize weeklyVisitCounts=_weeklyVisitCounts;
@property(copy, nonatomic) NSData *dailyVisitCounts; // @synthesize dailyVisitCounts=_dailyVisitCounts;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) BOOL shouldRecomputeDerivedVisitCountScores; // @synthesize shouldRecomputeDerivedVisitCountScores=_shouldRecomputeDerivedVisitCountScores;
@property(nonatomic) long long visitCountScore; // @synthesize visitCountScore=_visitCountScore;
@property(nonatomic) long long visitCount; // @synthesize visitCount=_visitCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;

@end

