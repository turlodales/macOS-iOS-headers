//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CoreDAVSRVResourceRecord : NSObject
{
    NSString *_serviceString;
    NSNumber *_priority;
    NSNumber *_weight;
    NSNumber *_port;
    NSString *_target;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSNumber *port; // @synthesize port=_port;
@property(retain, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *serviceString; // @synthesize serviceString=_serviceString;
- (id)description;

@end

