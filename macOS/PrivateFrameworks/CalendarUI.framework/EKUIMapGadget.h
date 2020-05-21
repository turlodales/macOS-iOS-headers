//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

#import "MKMapViewDelegate.h"

@class CLLocation, EKUIMapContainerView, EKUIMapView, EKUIWeatherBox, NSDateComponents, NSDictionary, NSImageView, NSString, NSTextField;

@interface EKUIMapGadget : EKUISingleViewGadget <MKMapViewDelegate>
{
    EKUIMapContainerView *_containerView;
    EKUIMapView *_mapView;
    EKUIWeatherBox *_weatherview;
    NSImageView *_weatherIconView;
    NSTextField *_temperatureField;
    NSTextField *_cityNameField;
    CLLocation *_lastFetchedWeatherLocation;
    NSDateComponents *_lastFetchedWeatherDateComponents;
    NSDictionary *_layoutMetrics;
}

+ (id)interestedChangeKeys;
- (void).cxx_destruct;
@property(retain) NSDictionary *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(retain) NSDateComponents *lastFetchedWeatherDateComponents; // @synthesize lastFetchedWeatherDateComponents=_lastFetchedWeatherDateComponents;
@property(retain) CLLocation *lastFetchedWeatherLocation; // @synthesize lastFetchedWeatherLocation=_lastFetchedWeatherLocation;
@property(retain) NSTextField *cityNameField; // @synthesize cityNameField=_cityNameField;
@property(retain) NSTextField *temperatureField; // @synthesize temperatureField=_temperatureField;
@property(retain) NSImageView *weatherIconView; // @synthesize weatherIconView=_weatherIconView;
@property(retain) EKUIWeatherBox *weatherview; // @synthesize weatherview=_weatherview;
@property(retain) EKUIMapView *mapView; // @synthesize mapView=_mapView;
@property(retain) EKUIMapContainerView *containerView; // @synthesize containerView=_containerView;
- (id)dateComponentsForWeather;
- (id)localizedStringWithUnitSymbolsUsingTemperatureString:(id)arg1;
- (id)weatherStringForWeatherData:(id)arg1;
- (BOOL)lastFetchedWeatherIsValidForCurrentOccurrence;
- (BOOL)currentOccurrenceHasStartDateComponents:(id)arg1 location:(id)arg2;
- (id)cityAndStateFromPlacemark:(id)arg1;
- (void)layoutWeather;
- (void)launchWeatherRequestForLocation:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (id)locationToDisplay;
- (BOOL)isEditable;
- (BOOL)shouldDisplay;
- (id)control;
- (void)updateMapViewWithLocation:(id)arg1 startLocation:(id)arg2;
- (void)setUpMapView;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

