//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMBalloonApp.h>

@interface _IMBalloonBundleApp : IMBalloonApp
{
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}

- (void).cxx_destruct;
- (void)setDataSourceClass:(Class)arg1;
- (void)setBrowserClass:(Class)arg1;
- (void)setBubbleClass:(Class)arg1;
- (Class)dataSourceClass;
- (Class)browserClass;
- (Class)bubbleClass;
- (void)_loadBundle;
- (void)_loadAppBundle;
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;

@end

