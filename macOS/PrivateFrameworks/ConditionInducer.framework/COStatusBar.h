//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface COStatusBar : NSObject
{
    CDUnknownBlockType _terminationNotifyCallback;
    CDUnknownBlockType _terminationBeganCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType terminationBeganCallback; // @synthesize terminationBeganCallback=_terminationBeganCallback;
@property(copy, nonatomic) CDUnknownBlockType terminationNotifyCallback; // @synthesize terminationNotifyCallback=_terminationNotifyCallback;
- (id)initWithConditionClass:(id)arg1 profile:(id)arg2 teardownBeganCb:(CDUnknownBlockType)arg3 teardownCompleteCb:(CDUnknownBlockType)arg4;

@end

