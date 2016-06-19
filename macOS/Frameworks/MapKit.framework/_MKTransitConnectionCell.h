//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

#import "MKMultiLineLabelContainer.h"

@class MKTransitInfoLabelView, NSButton, NSString, _MKUILabel;

@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell <MKMultiLineLabelContainer>
{
    _MKUILabel *_nameLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    NSButton *_button;
    id <GEOTransitConnectionInfo> _connectionInfo;
    id <_MKTransitConnectionCellDelegate> _delegate;
}

@property(nonatomic) __weak id <_MKTransitConnectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <GEOTransitConnectionInfo> connectionInfo; // @synthesize connectionInfo=_connectionInfo;
- (void).cxx_destruct;
- (void)_buttonSelected;
- (id)multilineTextFieldsWithinContainer;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

