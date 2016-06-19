//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKTableViewController.h>

#import "MKDynamicTransitUIContainer.h"

@class MKTransitItemIncidentsController, NSDate, NSString;

@interface MKTransitLineIncidentsViewController : _MKTableViewController <MKDynamicTransitUIContainer>
{
    MKTransitItemIncidentsController *_incidentsController;
    id <GEOTransitLineItem> _lineItem;
    NSDate *_referenceDate;
}

@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)_incidentCellForRow:(long long)arg1;
- (id)_incidents;
@property(readonly, copy, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)transitUIReferenceTimeUpdated:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithLineItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

