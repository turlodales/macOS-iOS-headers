//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSServiceListener : NSObject
{
    NSMutableArray *serviceProviders;
}

- (BOOL)_doInvokeServiceIn:(id)arg1 msg:(id)arg2 pb:(id)arg3 userData:(id)arg4 error:(id *)arg5 unhide:(BOOL)arg6;
- (id)providerRespondingToSelector:(SEL)arg1;
- (void)removeServiceProvider:(id)arg1;
- (void)addServiceProvider:(id)arg1;

@end

