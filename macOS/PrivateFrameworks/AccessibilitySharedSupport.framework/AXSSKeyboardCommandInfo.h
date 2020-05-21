//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXSSKeyboardCommandInfo : NSObject
{
    BOOL _handlesBothDownAndUp;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _downHandler;
    CDUnknownBlockType _upHandler;
}

+ (id)infoWithDownHandler:(CDUnknownBlockType)arg1 upHandler:(CDUnknownBlockType)arg2;
+ (id)infoWithHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType upHandler; // @synthesize upHandler=_upHandler;
@property(readonly, nonatomic) CDUnknownBlockType downHandler; // @synthesize downHandler=_downHandler;
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) BOOL handlesBothDownAndUp; // @synthesize handlesBothDownAndUp=_handlesBothDownAndUp;
- (id)_initWithHandler:(CDUnknownBlockType)arg1 downHandler:(CDUnknownBlockType)arg2 upHandler:(CDUnknownBlockType)arg3 handlesBothDownAndUp:(BOOL)arg4;

@end

