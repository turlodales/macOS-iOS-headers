//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ChartUpdater, NSError, StockChartData;

@protocol ChartUpdaterDelegate
- (void)chartUpdater:(ChartUpdater *)arg1 didFailWithError:(NSError *)arg2;
- (void)chartUpdater:(ChartUpdater *)arg1 didReceiveStockChartData:(StockChartData *)arg2;
@end

