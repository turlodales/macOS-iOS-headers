//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SRDevice;

@interface SRFetchRequest : NSObject
{
    double _from;
    double _to;
    SRDevice *_device;
}

@property(retain) SRDevice *device; // @synthesize device=_device;
@property double to; // @synthesize to=_to;
@property double from; // @synthesize from=_from;
- (void)dealloc;
- (id)init;

@end

