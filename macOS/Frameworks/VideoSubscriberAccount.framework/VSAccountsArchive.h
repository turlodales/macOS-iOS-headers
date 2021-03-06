//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSArray, VSAccountChannels;

__attribute__((visibility("hidden")))
@interface VSAccountsArchive : NSObject <NSSecureCoding>
{
    NSArray *_accounts;
    VSAccountChannels *_channels;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) VSAccountChannels *channels; // @synthesize channels=_channels;
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

