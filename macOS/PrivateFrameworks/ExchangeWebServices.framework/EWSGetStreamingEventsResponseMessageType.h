//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSResponseMessageType.h>

@class NSArray;

@interface EWSGetStreamingEventsResponseMessageType : EWSResponseMessageType
{
    BOOL _ConnectionStatus;
    NSArray *_Notifications;
    NSArray *_ErrorSubscriptionIds;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) BOOL ConnectionStatus; // @synthesize ConnectionStatus=_ConnectionStatus;
@property(copy, nonatomic) NSArray *ErrorSubscriptionIds; // @synthesize ErrorSubscriptionIds=_ErrorSubscriptionIds;
@property(copy, nonatomic) NSArray *Notifications; // @synthesize Notifications=_Notifications;

@end

