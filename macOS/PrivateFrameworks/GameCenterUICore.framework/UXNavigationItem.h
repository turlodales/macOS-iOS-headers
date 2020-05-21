//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView;

@interface UXNavigationItem : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSView *_titleView;
    NSView *_leftBarButtonView;
    NSView *_rightBarButtonView;
    NSView *_innerLeftBarButtonView;
    NSView *_innerRightBarButtonView;
    int _cancelButton;
    BOOL _spinnerEnabled;
    BOOL _allowRearangement;
}

+ (id)titleTextAttributes;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property BOOL allowRearangement; // @synthesize allowRearangement=_allowRearangement;
@property BOOL spinnerEnabled; // @synthesize spinnerEnabled=_spinnerEnabled;
@property(nonatomic) int cancelButtonLocation; // @synthesize cancelButtonLocation=_cancelButton;
@property(retain, nonatomic) NSView *innerRightBarButtonView; // @synthesize innerRightBarButtonView=_innerRightBarButtonView;
@property(retain, nonatomic) NSView *innerLeftBarButtonView; // @synthesize innerLeftBarButtonView=_innerLeftBarButtonView;
@property(retain, nonatomic) NSView *rightBarButtonView; // @synthesize rightBarButtonView=_rightBarButtonView;
@property(retain, nonatomic) NSView *leftBarButtonView; // @synthesize leftBarButtonView=_leftBarButtonView;
@property(retain, nonatomic) NSView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (BOOL)cancel;
- (id)cancelButton;
- (id)description;
- (void)dealloc;

@end

