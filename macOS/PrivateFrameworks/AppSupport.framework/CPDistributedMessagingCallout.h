//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CPDistributedMessagingCallout : NSObject
{
    id _target;
    SEL _selector;
    BOOL _returnsVoid;
    BOOL _returnsVoidIsValid;
}

@property(readonly, nonatomic) BOOL returnsVoid; // @synthesize returnsVoid=_returnsVoid;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, retain, nonatomic) id target; // @synthesize target=_target;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

