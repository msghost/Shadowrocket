//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "RETableViewManagerDelegate-Protocol.h"
#import "UIDocumentMenuDelegate-Protocol.h"
#import "UIDocumentPickerDelegate-Protocol.h"

@class NSArray, NSString, RETableViewCellStyle, RETableViewItem, RETableViewManager, RETableViewSection;
@protocol RETableViewManagerDelegate;

@interface DLWLuaFilesViewController : UITableViewController <UIDocumentMenuDelegate, UIDocumentPickerDelegate, RETableViewManagerDelegate>
{
    RETableViewItem *_item;
    NSArray *_options;
    RETableViewManager *_tableViewManager;
    RETableViewSection *_mainSection;
    CDUnknownBlockType _completionHandler;
    RETableViewCellStyle *_style;
    id <RETableViewManagerDelegate> _delegate;
    RETableViewSection *_remoteSection;
}

+ (id)defaultFile;
@property(retain, nonatomic) RETableViewSection *remoteSection; // @synthesize remoteSection=_remoteSection;
@property(nonatomic) __weak id <RETableViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RETableViewCellStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) RETableViewSection *mainSection; // @synthesize mainSection=_mainSection;
@property(retain, nonatomic) RETableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(nonatomic) __weak RETableViewItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)tableView:(id)arg1 willLoadCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)luaWillDownloadNotification:(id)arg1;
- (void)luaDidDeleteNotification:(id)arg1;
- (void)luaDidSaveNotification:(id)arg1;
- (void)addOptionItem:(id)arg1;
- (void)refreshOptionItems;
- (id)tableViewItemWithModel:(id)arg1;
- (void)showDocumentPickerControllerWithSourceView:(id)arg1;
- (void)dlw_addButtonTouched;
- (void)dlw_qrCodeScaned:(id)arg1;
- (void)setupRemoteItems;
- (void)setupAddButtonItem;
- (void)setupOptionItems;
- (void)viewDidLoad;
- (id)initWithItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

