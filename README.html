<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <title>Jet Plane Aerodynamics Calculator – README</title>
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <style>
    :root {
      --bg: #050816;
      --bg-elevated: #0b1020;
      --accent: #4f46e5;
      --accent-soft: rgba(79, 70, 229, 0.15);
      --accent-strong: #22c55e;
      --text: #e5e7eb;
      --text-muted: #9ca3af;
      --border-subtle: rgba(148, 163, 184, 0.35);
      --badge-bg: rgba(15, 23, 42, 0.9);
      --shadow-soft: 0 18px 45px rgba(15, 23, 42, 0.8);
      --radius-lg: 18px;
      --radius-md: 999px;
      --radius-sm: 8px;
    }

    * {
      box-sizing: border-box;
      margin: 0;
      padding: 0;
    }

    body {
      min-height: 100vh;
      font-family: system-ui, -apple-system, BlinkMacSystemFont, "SF Pro Text",
        "Segoe UI", sans-serif;
      background: radial-gradient(circle at top, #111827 0, #020617 55%, #000 100%);
      color: var(--text);
      display: flex;
      align-items: center;
      justify-content: center;
      padding: 32px 16px;
    }

    .page {
      width: 100%;
      max-width: 880px;
      background: linear-gradient(135deg, rgba(15, 23, 42, 0.96), rgba(8, 47, 73, 0.98));
      border-radius: 24px;
      padding: 24px;
      border: 1px solid rgba(148, 163, 184, 0.35);
      box-shadow: var(--shadow-soft);
      backdrop-filter: blur(18px);
    }

    @media (min-width: 768px) {
      .page {
        padding: 32px 36px;
        border-radius: 28px;
      }
    }

    header {
      display: flex;
      flex-direction: column;
      gap: 16px;
      margin-bottom: 24px;
    }

    @media (min-width: 640px) {
      header {
        flex-direction: row;
        align-items: center;
        justify-content: space-between;
      }
    }

    .project-title-group {
      display: flex;
      flex-direction: column;
      gap: 4px;
    }

    h1 {
      font-size: 1.9rem;
      letter-spacing: 0.02em;
      display: inline-flex;
      align-items: center;
      gap: 10px;
    }

    h1 span.icon {
      display: inline-flex;
      align-items: center;
      justify-content: center;
      width: 34px;
      height: 34px;
      border-radius: 999px;
      background: radial-gradient(circle at 30% 30%, #22c55e, #4f46e5);
      box-shadow: 0 0 22px rgba(34, 197, 94, 0.45);
      font-size: 18px;
    }

    .subtitle {
      font-size: 0.98rem;
      color: var(--text-muted);
      max-width: 36rem;
    }

    .badge-row {
      display: flex;
      flex-wrap: wrap;
      gap: 8px;
      margin-top: 8px;
    }

    .badge {
      display: inline-flex;
      align-items: center;
      gap: 6px;
      padding: 6px 12px;
      border-radius: var(--radius-md);
      font-size: 0.78rem;
      border: 1px solid var(--border-subtle);
      background: linear-gradient(135deg, rgba(15, 23, 42, 0.9), rgba(15, 23, 42, 0.6));
    }

    .badge-dot {
      width: 8px;
      height: 8px;
      border-radius: 50%;
      background: var(--accent-strong);
      box-shadow: 0 0 10px rgba(34, 197, 94, 0.8);
    }

    .badge-pill {
      display: inline-flex;
      align-items: center;
      gap: 6px;
      padding: 6px 12px;
      border-radius: var(--radius-md);
      font-size: 0.8rem;
      background: linear-gradient(135deg, #111827, #020617);
      border: 1px solid rgba(82, 82, 91, 0.9);
      box-shadow: 0 0 0 1px rgba(15, 23, 42, 1);
    }

    .badge-pill span.label {
      font-weight: 600;
      letter-spacing: 0.06em;
      text-transform: uppercase;
      font-size: 0.72rem;
      color: #e5e7eb;
    }

    .badge-pill span.value {
      padding: 3px 8px;
      border-radius: 999px;
      background: linear-gradient(135deg, #fb7185, #f97316);
      font-size: 0.7rem;
      font-weight: 600;
      color: #0b1120;
    }

    main {
      display: grid;
      gap: 18px;
    }

    @media (min-width: 900px) {
      main {
        grid-template-columns: 2.1fr 1.4fr;
        gap: 20px;
      }
    }

    section.card {
      background: radial-gradient(circle at top left, rgba(56, 189, 248, 0.15), transparent 55%),
        radial-gradient(circle at bottom right, rgba(129, 140, 248, 0.18), transparent 55%),
        var(--bg-elevated);
      border-radius: var(--radius-lg);
      padding: 16px 16px 18px;
      border: 1px solid var(--border-subtle);
    }

    section.card + section.card {
      margin-top: 0;
    }

    section.card h2 {
      font-size: 1.02rem;
      margin-bottom: 10px;
      letter-spacing: 0.06em;
      text-transform: uppercase;
      color: #cbd5f5;
      display: flex;
      align-items: center;
      gap: 8px;
      font-weight: 600;
    }

    section.card h2 span.marker {
      width: 18px;
      height: 2px;
      border-radius: 999px;
      background: linear-gradient(90deg, #22c55e, #22c55e00);
    }

    p {
      font-size: 0.92rem;
      line-height: 1.6;
      color: var(--text-muted);
    }

    ul {
      list-style: none;
      margin-top: 6px;
    }

    li {
      font-size: 0.9rem;
      color: var(--text-muted);
      padding: 4px 0;
      display: flex;
      align-items: flex-start;
      gap: 8px;
    }

    li::before {
      content: "•";
      margin-top: 2px;
      font-size: 0.9rem;
      color: var(--accent-strong);
    }

    .pill-list {
      display: flex;
      flex-wrap: wrap;
      gap: 6px;
      margin-top: 4px;
    }

    .pill {
      font-size: 0.8rem;
      padding: 5px 10px;
      border-radius: 999px;
      border: 1px solid rgba(148, 163, 184, 0.6);
      background: rgba(15, 23, 42, 0.9);
      color: var(--text-muted);
    }

    pre {
      margin-top: 6px;
      background: #020617;
      border-radius: 10px;
      padding: 10px 12px;
      border: 1px solid rgba(30, 64, 175, 0.7);
      font-size: 0.82rem;
      overflow-x: auto;
    }

    code {
      font-family: ui-monospace, SFMono-Regular, Menlo, Monaco, Consolas, "Liberation Mono", "Courier New",
        monospace;
      color: #e5e7eb;
    }

    footer {
      margin-top: 18px;
      padding-top: 14px;
      border-top: 1px solid rgba(55, 65, 81, 0.85);
      display: flex;
      flex-wrap: wrap;
      justify-content: space-between;
      gap: 8px;
      font-size: 0.8rem;
      color: var(--text-muted);
    }

    .author {
      display: flex;
      align-items: center;
      gap: 6px;
    }

    .author-avatar {
      width: 18px;
      height: 18px;
      border-radius: 999px;
      background: radial-gradient(circle at 30% 30%, #22c55e, #4f46e5);
      display: inline-flex;
      align-items: center;
      justify-content: center;
      font-size: 0.7rem;
      font-weight: 600;
      color: #e5e7eb;
    }

    .meta {
      display: flex;
      gap: 10px;
      flex-wrap: wrap;
    }

    .meta span {
      display: inline-flex;
      align-items: center;
      gap: 4px;
    }

    .meta-dot {
      width: 4px;
      height: 4px;
      border-radius: 999px;
      background: rgba(148, 163, 184, 0.8);
    }
  </style>
</head>
<body>
  <div class="page">
    <header>
      <div class="project-title-group">
        <h1>
          <span class="icon">✈️</span>
          Jet Plane Aerodynamics Calculator
        </h1>
        <p class="subtitle">
          A C++ utility that computes core jet aircraft aerodynamic metrics such as lift, drag,
          thrust, and L/D efficiency based on user-provided flight and engine parameters.
        </p>
        <div class="badge-row">
          <div class="badge">
            <span class="badge-dot"></span>
            <span>C++ • Console Application</span>
          </div>
          <div class="badge-pill">
            <span class="label">License</span>
            <span class="value">MIT</span>
          </div>
        </div>
      </div>

      <div>
        <div class="badge">
          <span>🛠️</span>
          <span>Educational • Aerodynamics • Jet Performance</span>
        </div>
      </div>
    </header>

    <main>
      <!-- Left column -->
      <section class="card">
        <h2><span class="marker"></span>About</h2>
        <p>
          This project is a small, self-contained C++ program that calculates basic jet aircraft
          aerodynamic properties. Given inputs such as aircraft speed, angle of attack, wing area,
          and engine parameters, it evaluates dynamic pressure, lift, drag, thrust, aerodynamic
          efficiency (L/D), and total aerodynamic force.
        </p>
      </section>

      <!-- Right column -->
      <section class="card">
        <h2><span class="marker"></span>Tech & License</h2>
        <ul>
          <li>Language: Modern C++ (console-based)</li>
          <li>Domain: Flight physics & aerodynamics</li>
          <li>Intended use: Education, experimentation, and quick aerodynamic estimates</li>
        </ul>
        <div class="pill-list">
          <span class="pill">Dynamic Pressure</span>
          <span class="pill">Lift & Drag</span>
          <span class="pill">Thrust</span>
          <span class="pill">L/D Ratio</span>
          <span class="pill">Total Aero Force</span>
        </div>
      </section>

      <section class="card">
        <h2><span class="marker"></span>How to Run</h2>
        <p>Compile and run from the command line:</p>
        <pre><code>g++ main.cpp -o jetcalc
./jetcalc</code></pre>
        <p style="margin-top: 8px;">
          The program will prompt for the necessary flight and engine parameters directly in the
          terminal and then output each calculated quantity step by step.
        </p>
      </section>

      <section class="card">
        <h2><span class="marker"></span>Inputs</h2>
        <ul>
          <li>Jet plane speed</li>
          <li>Angle of attack (α)</li>
          <li>Wing area</li>
          <li>Mass air + fuel flow rate</li>
          <li>Exhaust exit speed</li>
          <li>Flight speed</li>
          <li>Exhaust exit pressure</li>
          <li>Nozzle exit area</li>
        </ul>
      </section>
    </main>

    <footer>
      <div class="author">
        <span class="author-avatar">B</span>
        <span>Burak Akpınar • 2025</span>
      </div>
      <div class="meta">
        <span><span class="meta-dot"></span> Jet Aerodynamics</span>
        <span><span class="meta-dot"></span> MIT Licensed</span>
      </div>
    </footer>
  </div>
</body>
</html>
