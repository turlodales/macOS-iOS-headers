//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKInternetDateFetching-Protocol.h>

@class NSDate, NSMutableArray, NSString;
@protocol CRKInternetDateFetching;

@interface CRKPlatformInternetDateProvider : NSObject <CRKInternetDateFetching>
{
    id <CRKInternetDateFetching> _dateFetchingProvider;
    NSDate *_internetDateAndTime;
    double _uptimeAtInternetDateAndTimeFetch;
    NSMutableArray *_completionQueue;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(nonatomic) double uptimeAtInternetDateAndTimeFetch; // @synthesize uptimeAtInternetDateAndTimeFetch=_uptimeAtInternetDateAndTimeFetch;
@property(retain, nonatomic) NSDate *internetDateAndTime; // @synthesize internetDateAndTime=_internetDateAndTime;
@property(retain, nonatomic) id <CRKInternetDateFetching> dateFetchingProvider; // @synthesize dateFetchingProvider=_dateFetchingProvider;
- (id)fetchExistingInternetDate;
- (void)fetchInternetDateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

