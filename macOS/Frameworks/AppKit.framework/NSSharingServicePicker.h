//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSArray, NSDictionary, NSMenu, NSView;

@interface NSSharingServicePicker : NSObject
{
    id _reserved;
    NSMenu *rolloverMenu;
    CALayer *rolloverLayer;
    CALayer *innerBorderLayer;
    NSView *owner;
    NSArray *shareServices;
    NSArray *mainServices;
    NSArray *_applicationServices;
    NSArray *_excludedSharingServiceNames;
    NSDictionary *_shareKitInfo;
}

+ (void)openAppExtensionsPrefPane;
+ (id)sharedMoreMenuImage;
- (long long)style;
- (void)setStyle:(long long)arg1;
@property __weak id <NSSharingServicePickerDelegate> delegate;
- (id)menu;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGRect)rectForBounds:(struct CGRect)arg1 preferredEdge:(unsigned long long)arg2;
- (id)rolloverButtonCell;
- (void)hide;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)_openAppExtensionsPrefpane:(id)arg1;
- (void)_serviceSelected:(id)arg1;
- (void)_uppercaseString:(id)arg1;
- (void)_updateRolloverMenu:(id)arg1;
- (id)menuItemFromService:(id)arg1;
- (BOOL)displaysAsPopUpMenu;
- (id)_touchBarImageFromRepresentedObject:(id)arg1;
- (id)_alternateItemIdentifierFromRepresentedObject:(id)arg1;
- (id)_serviceFromRepresentedObject:(id)arg1;
- (id)_representedObjectForService:(id)arg1 alternateItemIdentifier:(id)arg2;
- (id)moreMenuImage;
- (id)emptyMenuImage;
- (void)_queryServices;
- (id)_prepareSHKSharingServicePicker;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
@property(copy) NSDictionary *shareKitInfo;
@property(copy) NSArray *excludedSharingServiceNames;
@property(copy) NSArray *applicationServices;

@end

