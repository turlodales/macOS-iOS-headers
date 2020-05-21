//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BlockCoalescer, NSTextInputContext;

__attribute__((visibility("hidden")))
@interface FavoritesPickerVisibilityManager : NSObject
{
    BOOL _observingKeyboardInputSourceOverlayVisibility;
    NSTextInputContext *_textInputContextBeingObserved;
    BlockCoalescer *_visibilityUpdateCoalescer;
    id <FavoritesPickerVisibilityController> _pickerVisibilityController;
    id <FavoritesPickerVisibilityManagerDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesPickerVisibilityManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FavoritesPickerVisibilityController> pickerVisibilityController; // @synthesize pickerVisibilityController=_pickerVisibilityController;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_isInputMethodsBarVisible;
- (void)_stopObservingKeyboardInputSourceOverlayVisibility;
- (void)_observeKeyboardInputSourceOverlayVisibilityIfNeeded;
- (void)_dismissFavoritesPicker:(id)arg1;
- (void)_showFavoritesPickerFromFavoritesBeingInstalledNotification:(id)arg1;
- (void)_showFavoritesPickerFromUnifiedFieldNotification:(id)arg1;
- (void)_scheduleFavoritesPickerToBeDismissed;
- (void)_scheduleFavoritesPickerToBeShown;
- (void)browserViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)backgroundLoadControllerDidCommitBackgroundLoad;
- (void)stopObservingKeyboardMethodsBarVisibility;
- (void)startObservingKeyboardMethodsBarVisibility;
- (void)unregisterFromNotificationsForUnifiedFieldCompletionController:(id)arg1;
- (void)registerForNotificationsForUnifiedFieldCompletionController:(id)arg1;
- (void)unregisterFromWindowNotifications;
- (void)registerForWindowNotifications;
- (id)init;

@end

