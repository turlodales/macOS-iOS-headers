//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EWSAutodiscoverOperation, NSString;
@protocol EWSAutodiscoverBindingDelegate;

@interface EWSAutodiscoverBinding : NSObject
{
    BOOL _logsActivity;
    NSString *_host;
    id <EWSAutodiscoverBindingDelegate> _delegate;
    EWSAutodiscoverOperation *_operation;
}

- (void).cxx_destruct;
@property(nonatomic) __weak EWSAutodiscoverOperation *operation; // @synthesize operation=_operation;
@property BOOL logsActivity; // @synthesize logsActivity=_logsActivity;
@property(readonly, nonatomic) __weak id <EWSAutodiscoverBindingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void)sendMessage:(id)arg1;
- (id)init;
- (id)initWithHost:(id)arg1 delegate:(id)arg2;

@end

