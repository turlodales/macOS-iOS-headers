//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Memories/NSObject-Protocol.h>

@class VEKProduction, VEKResult;
@protocol PMEditProviderDelegate;

@protocol PMEditProviderProtocol <NSObject>
@property(nonatomic) __weak id <PMEditProviderDelegate> delegate;
@property(retain, nonatomic) VEKProduction *production;
- (id)initWithProduction:(VEKProduction *)arg1;

@optional
- (void)updateWithResult:(VEKResult *)arg1;
@end

