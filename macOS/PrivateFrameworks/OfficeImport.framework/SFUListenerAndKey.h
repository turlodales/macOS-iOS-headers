//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SFUListenerAndKey : NSObject
{
    id mListener;
    id mKey;
}

@property(readonly, retain, nonatomic) id listener; // @synthesize listener=mListener;
@property(readonly, nonatomic) id key; // @synthesize key=mKey;
- (void)dealloc;
- (id)initWithListener:(id)arg1 key:(id)arg2;

@end

