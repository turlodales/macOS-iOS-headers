//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/FI_TUpdateLayerView.h>

__attribute__((visibility("hidden")))
@interface FI_TICloudBadgePlaceholderView : FI_TUpdateLayerView
{
    _Bool _selected;
    _Bool _dimmed;
    _Bool _active;
    _Bool _isMouseDown;
    int _context;
    int _badge;
    function_b1fce659 _clickHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int badge; // @synthesize badge=_badge;
@property int context; // @synthesize context=_context;
@property(getter=isActive) _Bool active; // @synthesize active=_active;
@property(getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)setClickHandler:(const function_b1fce659 *)arg1;
- (id)badgeImage;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)initCommon;

@end

