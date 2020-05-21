//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSImage, NSObject<OS_dispatch_queue>, NSString;

@interface AMSDialog : NSObject
{
    NSObject<OS_dispatch_queue> *_systemDialogQueue;
    NSArray *_buttons;
    CDUnknownBlockType _completionHandler;
    NSImage *_icon;
    NSString *_message;
    long long _selectedButtonIndex;
    long long _style;
    NSArray *_textFields;
    NSString *_title;
}

+ (id)dialogWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;
+ (id)dialogWithTitle:(id)arg1 message:(id)arg2;
- (void).cxx_destruct;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSArray *textFields; // @synthesize textFields=_textFields;
@property long long style; // @synthesize style=_style;
@property long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSImage *icon; // @synthesize icon=_icon;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) NSArray *buttons; // @synthesize buttons=_buttons;
- (void)presentSystemDialog;
- (void)presentSheetFromWindow:(id)arg1;
- (void)presentFromViewController:(id)arg1;
- (void)present;
- (void)addTextField:(id)arg1;
- (void)addButton:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;

@end

