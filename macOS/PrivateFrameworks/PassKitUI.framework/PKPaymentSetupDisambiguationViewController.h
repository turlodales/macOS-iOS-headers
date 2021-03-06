//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <PassKitUI/NSTableViewDataSource-Protocol.h>
#import <PassKitUI/NSTableViewDelegate-Protocol.h>

@class NSArray, NSString, NSTableView, PKPaymentSetupProduct, PKPaymentSetupViewController, PKPaymentWebService;

@interface PKPaymentSetupDisambiguationViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    PKPaymentSetupViewController *_setupVC;
    PKPaymentSetupProduct *_selectedProduct;
    NSArray *_possibleProducts;
    long long _context;
    PKPaymentWebService *_paymentWebService;
    NSTableView *_tableView;
    unsigned long long _selectedIndex;
}

- (void).cxx_destruct;
@property unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property long long context; // @synthesize context=_context;
@property(retain) NSArray *possibleProducts; // @synthesize possibleProducts=_possibleProducts;
@property(retain) PKPaymentSetupProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property(nonatomic) __weak PKPaymentSetupViewController *setupVC; // @synthesize setupVC=_setupVC;
- (id)nibBundle;
- (void)radioButtonAction:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)viewWillAppear;
- (id)initWithPaymentWebService:(id)arg1 possibleProducts:(id)arg2 context:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

