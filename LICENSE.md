**MAXIMUM RESTRICTION END USER LICENSE AGREEMENT (EULA) & PROPRIETARY SOURCE CODE LICENSE**

__LEGAL NOTICE: THIS IS A STRICT, BINDING CONTRACT. READ IT CAREFULLY BEFORE ACCESSING, DOWNLOADING, 
CLONING, CACHING, COMILING, VIEWING, OR USING ANY PORTION OF THE SOURCE CODE, TOOLS DATA LAYOUTS,
SHADERS, OR BINARIES CONTAINED IN THIS REPOSITORY__

This End User License Agreement ("Agreement") is a binding legal contract between you
(an idividual or single legan entity, herinafter referred to as "Licensee," "You," or
"Your") and the sole legal author and owner of this repository (hereinafter referred to as
"Licensor") governing the game engine software, underlying raw source code, structural
architecture, cache-aligned schemas, custom pipeline confugurations, toolsets, editor
suites, developer scripts, documentation, and associated digital assets contained within
this ecosystem (collectively, the "Engine").

BY ENTERING THIS REPOSITORY, VIEWING THE SOURCE CODE, CLONING THE
REPOSITORY, FORKING THE REPOSITORY, OR OTHERWISE UTILIZING ANY MATERIAL
CONTAINED HEREIN, YOU EXLICITLY, UNCONDITIONALLY, AND IRREVOCABLY AGREE
TO BE BOUND BY EACH AND EVERY TERM OF THIS AGREEMENT. IF YOU DO NOT AGREE
TO ALL CONVENANTS AND RESTRICTIONS CONTAINED HEREIN, YOU ARE CONSIDERED
AN UNAUTHORIZED USER. YOU MUST IMMEDIATELY EXIT THIS REPOSITORY, PURGE ALL
ENGINE COPIES FROM YOUR LOCAL STORAGE OR CACHES, AND CEASE ALL DIRECT OR
INDIRECT ENGAGEMENT WITH THE ENGINE.

--------------------------------------------------------------------------------------------------

**AUTOMATIC INELLECTUAL PROPERTY & COPYRIGHT NOTICE**

__Copyright © 2026 ZZeplin. All Rights Reserved__
_Legal Notice: This Engine, its custom architectural paradigms, and its raw source code
are protected automatically under international copyright laws (including the Berne Convention),
trade secret legal frameworks, and proprietary intellectual property doctrines. Government
registration is not a prerequisite for full legal enforceability. Any unatuthorized use,
exploitation, or reproduction constitutes immediate, actionable copyright infringement._

--------------------------------------------------------------------------------------------------

**SECTION 1: ABSOLUTE OWNERSHIP OF INTELLECTUAL PROPERTY**
1.1 __Retention of All Rights:__ The Engine is licensed, not sold. The Licensor retains sole
exclusive, absolute, and unchallengeable title, ownership, copyright, and legal control over the
Engine in perpetuity. This includes, without limitation, all raw source code, compiled object code,
structual design, sequence, organization, algorithmic logic, interal mathematical formulations,
rendering pipelines, data schemas, API configurations, and graphic user interface layouts.
1.2 __No Implied Transfer of Waiver:__ No license, right, title, or interest in any trademark,
copyright, proprietary design, or underlying techical breakthrough is transferred, shared, or
implied under this Agreement. You explicitly acknowledge that you acquire nothimg more than highly
restricted, temporary, and full revocable right to view and interact with the Engine under the 
narrow conditions explicity stated in Section 2 and Section 3 of this document.

**SECTION 2: LIMITED PERMITTED USE (EDUCATIONAL & PERFORMANCE STUDY ONLY)**
2.1 __Scope of Learning License:__ The Licensor grants You a limited, non-exclusive,
non-transferable, non-sublicensable, and fully revocable license to read, view, and analyze the raw
source code within this repository for the sole, exclusive purpose of personal, non-commercial
education, academic research, architectural study, and self-directed learning.
2.2 __Limitation of Insight:__ You may study the programming techniques, cahce-optimization systems,
and architectural patterns utilized in the Engine to enhance your personal understanding of game 
engine engineering. However, this educational insight does not grant any right to execute, deploy,
extract, re-purpose, or build upon the code except as explicitly outlined in the Modding frameworks
of Section 3.

**SECTION 3: THE COMMUNITY MODDING & COMMUNITY CONTENT LICENSE**
To foster a community around the Licensor's ecosystem, a narrow conditional exception is granted for
the creation of software modtifications, custom maps, add-ons, hooks, scripts, extenstions, and 
community-made content (collectively, "Mods") designed explicitly and exclusively to run within
games developed and officially authorized by the Licensor.

3.1 __Mandatory Non-Commercial Status:__ Every Mod created using, utilizing, or interacting with this 
Engine must be distributed to the community completely free of charge. You shall not sell Mods, charge
subscription fees for Mod Access, institute mandatory paywalls, gate content behind paid tiers
(including Pareon, Lo-fi, or similar platforms), or use the Mod to generate direct or indirect
advertising, affiliate, or transactional revenue.
3.2 __Absolute Prohibition on Engine Redistribution:__ When distributing Your original Mod files to
the community, You may only distribute your own original, newly authored script files or custom assets.
You are strictly and absolutely prohibited from distributing bundling, packaging, or copying the core 
Engine source code, compiled Engine binaries, editor tools, runtime engines, or foundational framework
files alongside or within your Mod Packages.
3.3 __No External Engine Standalones:__ Under no circumstances may a Mod or community project compile
this Engine into an independent, standalone application, software tool, or separate game that can
execute without the original, authorized game files explicitly provided by the Licensor.

**SECTION 4: HARDWARE-SPECIFIC, STRUCTURAL, & DATA-ORIENTED PROHIBITIONS**
You explicitly acknowledge that the Engine is uniquely engineered using strict Data-Oriented Design
(DOD) principles, low-overhead graphics processing via the Vulkan API, immediate-mode layout structures
leveraging Dear ImGui, and exlicit cross-platform hardware allocation managed by Simple DirectMedia Layer
(SDL). Because the Engine operates uner a rigid DOD purist architecture utilizing pre-allocated static
blocks and performance-critical custom arenas - completely bypassing standard object-oriented paradims
and avoiding runtim allocation mechanisms (malloc, free, new, delte) the unique configuration and layout
of data are classified as protected trade secrets. You covenan and agree to follow absolute technical 
restrictions:

4.1 __No Data Layout or Struct Harvesting:__ You are strictly prhibited from copying, adapting, or
replicating the Engine's raw memory configurations, flat array pools, parallel component arrays, or
cache-aligned structural configurations. The precise design of contiguous date structures build to 
maximize CPU L1/L2/L3 cache efficiency and enforce dequential data access is proprietary intellectual
property. You may not re-implement these DOD memory schemas in external standalone graphics, compute, or
software engines.
4.1.1 __Concept vs. Implementation Separation:__ For the avoidance of doubt, the Licensor does not claim
ownership over the avstract, public-domain mathematical comcepts of Data-Oriented Design, CPU cache
optimization, or standard Vulkan pipelines. You are permitted to apply these industry-standard conceptual
methodologies to your own independent projects. However, you are strictly prohibited from using the Engine's
source code as a direct template, structural blueprint, or architectural reference sheet. You must figure
out, write, and structure your own cache-aligned logic entirely from scratch, using independent clean-room
engineering. Any structural layout, parallel array design, or pipeline configuration in your own project that
structurally mirrors or clones the distinctive, non-trivial syntax and layout of this Engine shall be deemed
a prima facie violation of this Agreement and an infringement of the Licensor's copyright.
4.2 __No Harvesting of Vulkan Pipelines & Shaders:__ You shall not copy, extract, adapt, or reverse-engineer
the specific Vulkan configuration states, pipeline layouts, descriptor set layouts, memory allocation
structures, rendering queues, or accompanying SPIR-V binary/HLSL/GLSL shade source code for use in any
non-authorized rendering configurations or external products.
4.3 __No Extraction of ImGui Layouts, or SDL Abstractions:__ You are strictly prohibited from lifting the 
specific Immediate Mode GUI Layouts, cuustom state management abstractions, or custom SDL2/SDL3 event-handling
and input wrappters developed to bridge the Engine to input and operating system windowing subsystems.
4.4 __Total Ban on Alternative Memory Injectors:__ Because this Engine is a DOD purist framework designed to
operate within fixed, optimized boundaries, you shall not build, compile, distribute, or execute hooks, memory
injection tools, or wrapper DLLs designed to force dynamic runtime memory allocations (malloc, free, new, delete)
into the Engine's performance-critical hot loops or data pools for the purpose of redirecting, augmenting, or
hijacking execution logic.
4.5 __No Code Harvesing or Logic Stripping:__ You are strictly prohibited from copying, lifting, adapting,
re-typing, modifying, or embedding any portion of this source code, logic, structs, loops, or custom functions
into your own independent software projects, commecial software, open-source repositories, or alternative game
engines. You may learn from the architectural concepts, but the code itself must never leave this specific
ecosystem.
4.6 __No Commercial Exploitation:__ You shall not utilize this Engine, or any derivitive frameworks built from 
it, for any commercial, enterrise, business, or revenue-generating purposes whatsoever. This includes a total
ban of releasing standalone commercial games built with the Engine on platforms like Steam, Epic Games Store,
GOG, App Store, Google Play, itch.io, or any other digital or physical storefront.
4.7 __No Competitive Development & Clean-Room Engine Exception:__ You shall not use your access to this source
code to reverse-engineer, construct, design, or optimize a competing game engine or rendering framework intended
to rival or replicate the performance characteristicts of the Licensor's product by utilizing the Licensor's
unique structural designs.
4.7.1 __Commercial Engine Development Exception:__ Notwithstanding the restriction in Section 4.7, you are 
explicitly permitted to develop and market your own independent game engine for commercial use using the same
architectural ideologis, technology stack, and engineering frameworks (specifically Data-Oriented Desing, Vulkan,
Dear ImGui, and SDL). However, this exception is strictly conditioned upon the following absolute rules:
* No Direct Copying: The commercial engine you build must be entirely your own original creation, written from
scratch, using independant engineering.
* No Structural Blueprinting: You are strictly prohibited from using the Licensor's Engine srouce code, file
structures, array packing strategies, or internal system configurations to map, model, or structure your engine
in any way.
* Total Separation: You may apply the abstract *concepts* you learned from viewing this repository, but you must
close this repository and figure out your own implementation entirely on your own without referencing the
Licensor's code during development. Any commercial engine found to structurally mirror, clone, or borrow the
specific, non-trivial syntax or architectural layouts of this Engine will immediately void this exception and
face full copyright enforcement.
4.8 __No Sub-Licensing or Assignment:__ You have zero legal authorizy to grant rights to this Engine to any third
party. You cannot rent, lease, lend, sub-license, assing, or transfer this Engine, its source code, or your
rights under this EULA to any individual or entity.

**SECTION 5: MANDATORY COMMERCIAL LICENSING PROVISION**
5.1 __Explicit Written Authorization Required:__ If You or your organization desire to utilize this Engine, its
source code, its memory layouts, or its underlying architecture for any deployment, application, or project outside
of free, personal community modding - including but not limited to commercial game distribution, corporate training,
integration into a business environment, or code re-use in a commercial product - you are legall required to
immediately halt development and secure a formal, written Commercial Software License Agreement executed directly by
the Licensor.
5.2 __Contact Protocol:__ To initiate inquries regarding commercial licensing terms, revenue-sharing models, custom
distribution rights, or authorized enterprise access, You must formally contact the Licensor via the official
communication channels provided in this repository or directly or: (business email to come)

**SECTION 6: GITHUB PLATFORM COMPLIANCE AND LIMITATIONS**
6.1 __Platform Specificity:__ if this repository is configured with public visibility on Github, You are granted
baseline, non-negotiable rights requierd to view and "fork" the repository strictly withing the internal mechanisms
of the GitHub platform, solely as dictated by the GitHub Terms of Service.
6.2 __No Waiver of Rights:__ The act of making this repository public, or the act of a user forking this repository,
does not under any circumstances alter, diminish, weakon, or waive any of the restrictions, copyright protections,
trade secret designations, architectural convenants, or prohibitions against commercial use and code re-use outlined
in this Agreement. The provisions of this EULA remain supreme over any local downloads, local clones, or external
forks.

**SECTION 7: TERM, AUTOMATIC TERMINATION, & LEGAM REMEDIES**
7.1 __Revocability:__ This Agreement, alongside any educational, viewing, or modding permissions granted hereunder,
is fully revocable by the Licensor at any time, for any reason, without prior notice, liability, or obligarion to You.
7.2 __Immediate Termination:__ Any violation of any clause, sub-clause, restriction, or covenant within this Agreement
results in the immediate, automatic termination of this license without requiring formal notice from the Licensor.
7.3 __Mandatory Purge Obligations:__ Upon termination, your legal right to view, hold, compile, or utilize the Engine
ceases instantly. You must immediately delete, destrou, and permanently purge all local clones, zip files, cached data,
configurations, compiled binaries, and forks of the Engine in your possession, custody, or control.
7.4 __Equitable Remedies:__ You acknowledge that a breach of this Agreement causing unauthorized commercialization,
structural copying, or source code leakage will cause irreparable harm to the Licensor for which monetary damages alone
would be inadequate. Consequently, the Licensor shall be entitled to see immediate injunctive relief, specific
performance, and statutory damages, for coyright infringement to hald unauthorized activites and compel platform
providers to pull down offending materials.

**SECTION 8: COMPLETE DISCLAIMER OF WARRANTY**

