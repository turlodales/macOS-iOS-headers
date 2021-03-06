//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol RWIDriverInterfaceDelegate;

@interface RWIDriverInterface : NSObject
{
    long long _state;
    NSString *_name;
    id <RWIDriverInterfaceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RWIDriverInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)_changeInterfaceState:(BOOL)arg1;
- (BOOL)stop;
- (BOOL)start:(id *)arg1;
- (id)initWithName:(id)arg1;
@property(readonly, nonatomic) BOOL isRunning; // @dynamic isRunning;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@end

