//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <AppKit/_NSDatePickerCalendarOverlayDelegate-Protocol.h>

@class NSCalendar, NSColor, NSDate, NSLocale, NSTimeZone, _NSDatePickerCalendarOverlay;
@protocol NSDatePickerCellDelegate;

@interface NSDatePicker : NSControl <_NSDatePickerCalendarOverlayDelegate>
{
    BOOL _isShowingCalendarOverlay;
    BOOL _isInOverlay;
    BOOL _presentsCalendarOverlay;
    _NSDatePickerCalendarOverlay *_calendarOverlay;
}

+ (void)initialize;
@property BOOL presentsCalendarOverlay; // @synthesize presentsCalendarOverlay=_presentsCalendarOverlay;
@property BOOL _isInOverlay; // @synthesize _isInOverlay;
@property BOOL _isShowingCalendarOverlay; // @synthesize _isShowingCalendarOverlay;
@property(retain) _NSDatePickerCalendarOverlay *_calendarOverlay; // @synthesize _calendarOverlay;
- (void)_removeAllCellMouseTracking;
- (void)_setMouseTrackingForCell:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)removeFromSuperview;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (void)keyDown:(id)arg1;
- (BOOL)isOpaque;
@property __weak id <NSDatePickerCellDelegate> delegate;
@property(copy) NSDate *maxDate;
@property(copy) NSDate *minDate;
- (id)_datePickerCell;
@property double timeInterval;
@property(copy) NSDate *dateValue;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSLocale *locale;
@property(copy) NSCalendar *calendar;
@property unsigned long long datePickerElements;
@property unsigned long long datePickerMode;
- (CDStruct_6b6ad735)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (double)baselineOffsetFromBottom;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)_selectedDateDidChangeToDate:(id)arg1 forOverlayView:(id)arg2;
- (void)_selectNextKeyViewHidingOverlayView:(id)arg1;
- (void)_selectPreviousKeyViewHidingOverlayView:(id)arg1;
- (void)_calendarOverlayShouldClose:(id)arg1;
- (void)_hideCalendarOverlay;
- (void)_showCalendarOverlay;
- (BOOL)_shouldShowOverlayForElement:(int)arg1;
- (BOOL)_currentConfigurationSupportsCalendarOverlay;
- (BOOL)_shouldShowCalendarOverlayForEvent:(id)arg1;
@property(copy) NSColor *textColor;
@property(copy) NSColor *backgroundColor;
@property BOOL drawsBackground;
@property(getter=isBordered) BOOL bordered;
@property(getter=isBezeled) BOOL bezeled;
@property unsigned long long datePickerStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonAwake;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)_fieldElementData;
- (void)_reloadFieldElementData;
- (void)_setWrapsDateComponentArithmetic:(BOOL)arg1;
- (BOOL)_wrapsDateComponentArithmetic;
- (void)_setForcesLeadingZeroes:(BOOL)arg1;
- (BOOL)_forcesLeadingZeroes;
- (void)_setDisabledTextColor:(id)arg1;
- (id)_disabledTextColor;
- (id)ns_widgetType;
- (BOOL)ns_hasClockAndCalendar;
- (BOOL)ns_hasCalendar;
- (BOOL)ns_hasClock;
- (BOOL)ns_isGraphical;

@end

