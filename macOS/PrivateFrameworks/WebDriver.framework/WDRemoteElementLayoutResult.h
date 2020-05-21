//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WDRemoteElement;

@interface WDRemoteElementLayoutResult : NSObject
{
    BOOL _obscured;
    BOOL _pointerInteractable;
    BOOL _keyboardInteractable;
    WDRemoteElement *_element;
    long long _coordinateSystem;
    struct CGPoint _inViewCenterPoint;
    struct CGRect _bounds;
}

- (void).cxx_destruct;
@property(nonatomic) long long coordinateSystem; // @synthesize coordinateSystem=_coordinateSystem;
@property(nonatomic) struct CGPoint inViewCenterPoint; // @synthesize inViewCenterPoint=_inViewCenterPoint;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic, getter=isKeyboardInteractable) BOOL keyboardInteractable; // @synthesize keyboardInteractable=_keyboardInteractable;
@property(nonatomic, getter=isPointerInteractable) BOOL pointerInteractable; // @synthesize pointerInteractable=_pointerInteractable;
@property(nonatomic, getter=isObscured) BOOL obscured; // @synthesize obscured=_obscured;
@property(copy, nonatomic) WDRemoteElement *element; // @synthesize element=_element;
- (id)description;

@end

