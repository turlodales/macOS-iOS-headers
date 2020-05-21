//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSArray, NSButton, NSPopUpButton;

@interface SHKShareLocationController : NSViewController
{
    NSArray *_locations;
    long long _status;
    long long _currentLocationIndex;
    CDUnknownBlockType _updateLocationsBlock;
    id <SHKShareLocationControllerDelegate> _delegate;
    NSButton *locationButton;
    NSPopUpButton *locationsPopupButton;
}

+ (id)keyPathsForValuesAffectingCurrentLocationDisplayName;
+ (id)keyPathsForValuesAffectingCurrentLocation;
- (void).cxx_destruct;
@property __weak id <SHKShareLocationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType updateLocationsBlock; // @synthesize updateLocationsBlock=_updateLocationsBlock;
@property long long currentLocationIndex; // @synthesize currentLocationIndex=_currentLocationIndex;
- (void)locationPopupChanged:(id)arg1;
- (void)locationClicked:(id)arg1;
- (id)currentLocationDisplayName;
@property(readonly) id currentLocation;
@property(copy) NSArray *locations;
- (void)updateFailedAndIsUnavailable:(BOOL)arg1;
@property long long status; // @synthesize status=_status;
- (void)_showRemoveImage;
- (void)_showAndUpdateArrowImage;
- (id)imageForLocationButtonState:(unsigned long long)arg1;
@property BOOL enabled;
- (void)_updateLocationsPopupWidth;
- (void)_updateLocationsPopup;
- (id)_titleForLocation:(id)arg1;
- (void)invalidate;
- (id)initWithParentView:(id)arg1;
- (BOOL)isTextDirectionRTL;

@end

