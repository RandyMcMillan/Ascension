//
//  SVAscensionDelegate.h
//  Ascension
//
//  Coded by Stefan Vogt.
//  Released under the FreeBSD license.
//  http://www.byteproject.net
//

#import <Cocoa/Cocoa.h>

@interface SVAscensionDelegate : NSObject {
	
	BOOL	 applicationHasStarted;
}

// integer and float values
@property (readwrite, assign) BOOL applicationHasStarted;

// actions
- (IBAction)openPreferences:(id)sender;
- (IBAction)openIssueTracker:(id)sender;

@end
