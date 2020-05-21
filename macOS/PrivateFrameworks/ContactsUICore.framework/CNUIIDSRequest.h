//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNUIIDSRequest : NSObject
{
}

+ (id)validHandlesFromHandles:(id)arg1;
+ (id)errorRefreshingHandles:(id)arg1 forService:(id)arg2;
+ (id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 delay:(double)arg4 scheduler:(id)arg5;
+ (id)refreshStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3;
+ (id)afterDelayRetryRefreshingStatusOfDestinations:(id)arg1 forService:(id)arg2 queryControllerWrapper:(id)arg3 scheduler:(id)arg4;
+ (BOOL)shouldRetryRefreshingIDSStatusOfDesinationsGivenResult:(id)arg1;
+ (id)validateHandles:(id)arg1 forService:(long long)arg2 scheduler:(id)arg3 queryControllerWrapper:(id)arg4;
+ (id)IDSResponseQueue;
+ (id)IDSServiceForService:(long long)arg1;
+ (BOOL)isDestinationAvailable:(id)arg1 givenStatusesByDestination:(id)arg2;
+ (id)resultsForIDSControllerResult:(id)arg1 handlesByDestination:(id)arg2;
+ (BOOL)isStatusOfEveryDestinationUnknown:(id)arg1;

@end

