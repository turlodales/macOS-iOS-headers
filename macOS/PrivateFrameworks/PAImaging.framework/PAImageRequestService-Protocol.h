//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PAImaging/NSObject-Protocol.h>

@class PAURLRequest;
@protocol PAImageResponseInternal, PFCanceler;

@protocol PAImageRequestService <NSObject>
- (id <PAImageResponseInternal>)submitURLRequest:(PAURLRequest *)arg1 canceler:(id <PFCanceler>)arg2;
@end

