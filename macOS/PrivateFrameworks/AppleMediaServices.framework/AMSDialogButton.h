//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMSDialogButton : NSObject
{
    CDUnknownBlockType _handler;
    long long _style;
    NSString *_title;
}

+ (id)buttonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy) NSString *title; // @synthesize title=_title;
@property long long style; // @synthesize style=_style;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;

@end

