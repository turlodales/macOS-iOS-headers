//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSURL;

@interface HMFCache : HMFObject
{
    BOOL _exists;
    NSURL *_URL;
}

+ (id)defaultCache;
- (void).cxx_destruct;
@property(readonly, getter=isExists) BOOL exists; // @synthesize exists=_exists;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithName:(id)arg1;
- (id)init;

@end

