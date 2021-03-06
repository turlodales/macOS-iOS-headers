//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocalWindowWrappingRemoteWindow;

@interface NSRemoteResponderProxyObject : NSObject
{
    SEL _action;
    NSLocalWindowWrappingRemoteWindow *_remoteWindow;
    BOOL _respondsToValidateMenuItem;
    BOOL _validateMenuItemAnswer;
    BOOL _respondsToValidateUserInterfaceItem;
    BOOL _validateUserInterfaceItemAnswer;
}

- (void).cxx_destruct;
@property BOOL validateUserInterfaceItemAnswer; // @synthesize validateUserInterfaceItemAnswer=_validateUserInterfaceItemAnswer;
@property BOOL validateMenuItemAnswer; // @synthesize validateMenuItemAnswer=_validateMenuItemAnswer;
@property BOOL respondsToValidateUserInterfaceItem; // @synthesize respondsToValidateUserInterfaceItem=_respondsToValidateUserInterfaceItem;
@property BOOL respondsToValidateMenuItem; // @synthesize respondsToValidateMenuItem=_respondsToValidateMenuItem;
@property(retain) NSLocalWindowWrappingRemoteWindow *remoteWindow; // @synthesize remoteWindow=_remoteWindow;
@property SEL action; // @synthesize action=_action;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_validateUserInterfaceItem:(id)arg1 type:(unsigned long long)arg2;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

